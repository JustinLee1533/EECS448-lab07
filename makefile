Lab07: main.o Test.o
	g++ -g -std=c++11 -Wall main.o Test.o -o Lab07

main.o: main.cpp LinkedList.h LinkedList.hpp Node.h Node.hpp Test.h
	g++ -g -std=c++11 -Wall -c main.cpp

Test.o: Test.h Test.cpp
	g++ -g -std=c++11 -Wall -c Test.cpp

clean:
	rm *.o Lab07
	echo clean done
