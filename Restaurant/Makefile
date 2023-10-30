CC = g++
CFLAGS = -Wall -std=c++11

SOURCES = main.cpp Customer.cpp Table.cpp Restaurant.cpp TableIterator.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = Main.out

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
run:
	./$(EXECUTABLE)
clean:
	rm -f $(EXECUTABLE) $(OBJECTS)