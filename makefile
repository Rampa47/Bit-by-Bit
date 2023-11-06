CXX = g++
CXXFLAGS = -std=c++11 -Wall -g

SRC_FILES := $(wildcard *.cpp)
OBJ_DIR := obj
OBJ_FILES := $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
EXEC_DIR := exe
EXECUTABLE = $(EXEC_DIR)/main

all: directories $(EXECUTABLE)

$(EXECUTABLE): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(EXECUTABLE)
	./$(EXECUTABLE)

debug: $(EXECUTABLE)
	gdb ./$(EXECUTABLE)

clean:
	rm -rf $(OBJ_DIR) $(EXEC_DIR)

valgrind: $(EXECUTABLE)
	valgrind --leak-check=full ./$(EXECUTABLE)

.PHONY: all clean run debug valgrind directories

directories:
	@mkdir -p $(OBJ_DIR) $(EXEC_DIR)
