Main.out: Node.o LinkedList.o Customer.o main.o
	g++ Node.o LinkedList.o Customer.o main.o -o Main.out

Node.o: Node.cpp
	g++ -c -g Node.cpp

LinkedList.o: LinkedList.cpp
	g++ -c -g LinkedList.cpp

Customer.o: Customer.cpp
	g++ -c -g Customer.cpp

main.o: main.cpp
	g++ -c -g main.cpp

run:
	./Main.out

clean:
	rm *.o Main.out