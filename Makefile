Bag: main.o bag.o
	g++ -o bag main.o bag.o

main.o: main.cc bag.h
	g++ -c main.cc

bag.o: bag.cc bag.h
	g++ -c bag.cc
