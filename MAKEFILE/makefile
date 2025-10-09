program: main.o file1.o
	g++ -std=c++11 main.o file1.o -o program

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

file1.o: file1.cpp
	g++ -std=c++11 -c file1.cpp

clean:
	rm -f *.o program
