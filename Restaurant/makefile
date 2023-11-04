Main.out: Table.o Restaurant.o Customer.o TableIterator.o MaitreD.o main.o
	g++ Table.o Restaurant.o Customer.o main.o TableIterator.o MaitreD.o -o Main.out

Table.o: Table.cpp
	g++ -c -g Table.cpp

Restaurant.o: Restaurant.cpp
	g++ -c -g Restaurant.cpp

Customer.o: Customer.cpp
	g++ -c -g Customer.cpp

TableIterator.o: TableIterator.cpp
	g++ -c -g TableIterator.cpp

MaitreD.o: MaitreD.cpp
	g++ -c -g MaitreD.cpp

main.o: main.cpp
	g++ -c -g main.cpp

run:
	./Main.out

clean:
	rm *.o Main.out