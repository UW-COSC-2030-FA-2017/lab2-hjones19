all: ListProcessor

ListProcessor: ListProcessor.o LinkedList.o Node.o
	g++ -Wall ListProcessor.o LinkedList.o Node.o -o ListProcessor

ListProcessor.o: ListProcessor.cpp
	g++ -Wall -c ListProcessor.cpp

LinkedList.o: LinkedList.cpp
	g++ -Wall -c LinkedList.cpp

Node.o: Node.cpp
	g++ -Wall -c Node.cpp

clean:
	rm -rf *.o
