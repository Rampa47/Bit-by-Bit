Main.out: Node.o LinkedList.o main.o
	g++ Node.o LinkedList.o main.o -o Main.out

Node.o: Node.cpp
	g++ -c -g Node.cpp

LinkedList.O: LinkedList.cpp
	g++ -c -g LinkedList.cpp

main.o: main.cpp
	g++ -c -g main.cpp

run:
	./Main.out

clean:
	rm *.o Main.out