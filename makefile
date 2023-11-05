# Compiler
CC = g++

# Compiler flags
CFLAGS = -c -Wall

# Linker flags
LDFLAGS =

# List of source files
SOURCES = BillComponent.cpp BillPayer.cpp CompositeBillPayer.cpp DelegatingCompositebill.cpp BillMain.cpp

# List of object files
OBJECTS = $(SOURCES:.cpp=.o)

# Name of executable
EXECUTABLE = BillApp

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -rf *o $(EXECUTABLE)
