myprogram: prime.o
	g++ -g  -std=c++11 prime.o -o myprogram

prime.o: prime.cpp
	g++ -g  -std=c++11 -c prime.cpp

clean:
	rm -f *.o myprogram
