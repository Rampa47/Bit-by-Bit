Main.out: Node.o LinkedList.o Customer.o Mediator.o Colleague.o main.o
	g++ Node.o LinkedList.o Customer.o main.o -o Mediator.o -o Colleague.o -o Main.out

Node.o: Node.cpp
	g++ -c -g Node.cpp

LinkedList.o: LinkedList.cpp
	g++ -c -g LinkedList.cpp

Customer.o: Customer.cpp
	g++ -c -g Customer.cpp\

Mediator.o: Mediator.cpp
	g++ -c -g Mediator.cpp

Colleague.o: Colleague.cpp
	g++ -c -g Colleague.cpp

main.o: main.cpp
	g++ -c -g main.cpp

run:
	./Main.out

clean:
	rm *.o Main.out