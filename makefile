# Compiler and compiler flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -g

# Source files and object files
SRC_FILES := $(wildcard *.cpp)
OBJ_FILES := $(SRC_FILES:.cpp=.o)

# Executable name
EXECUTABLE = main

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(EXECUTABLE)
	make clean
	make
	./$(EXECUTABLE)

clean:
	rm -f $(OBJ_FILES) $(EXECUTABLE)

valgrind: $(EXECUTABLE)
	valgrind --leak-check=full ./$(EXECUTABLE)

.PHONY: all clean
