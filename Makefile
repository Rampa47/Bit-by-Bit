CXX = g++
CXXFLAGS = -std=c++11

SOURCES = OrderingProcessMain.cpp ChipSauce.cpp BeefBurger.cpp ChickenBurger.cpp PlainChips.cpp TomatoChipSauce.cpp JalapenoChipSauce.cpp GrilledPoultry.cpp FriedPoultry.cpp Poultry.cpp Order.cpp Burger.cpp OrderContext.cpp InProgress.cpp Raw.cpp Done.cpp

OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = OrderingProcessMain.exe

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm *.o OrderingProcessMain.exe

run: $(EXECUTABLE)
	./$(EXECUTABLE)

.PHONY: all clean run

