CXX = g++
CXXFLAGS = -std=c++11

SOURCES = ComplainthandlingMain.cpp Waiter.cpp Table.cpp Manager.cpp HeadChef.cpp FoodComplaint.cpp TimeComplaint.cpp ServiceComplaint.cpp Complaint.cpp ComplaintsHandler.cpp

OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = Complainthandlingmain.exe

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm *.o Complainthandlingmain.exe

run: $(EXECUTABLE)
	./$(EXECUTABLE)

.PHONY: all clean run