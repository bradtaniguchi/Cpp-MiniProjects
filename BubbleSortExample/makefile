#all: main.cpp bubblesort.cpp ../printarray.cpp ../swap.cpp headers.h ../masterheaders.h
#	g++ main.cpp bubblesort.cpp ../printarray.cpp ../swap.cpp -o main.o

#New Makefile
all: app clean

app: main.o bubblesort.o printarray.o swap.o 
	g++ main.o bubblesort.o printarray.o swap.o -o app

main.o: main.cpp bubblesort.o printarray.o swap.o
	g++ -c main.cpp -o main.o

bubblesort.o: bubblesort.cpp swap.o
	g++ -c bubblesort.cpp -o bubblesort.o

swap.o: ../swap.cpp 
	g++ -c ../swap.cpp -o swap.o

printarray.o: ../printarray.cpp
	g++ -c ../printarray.cpp -o printarray.o

clean:
	rm -f main.o
	rm -f bubblesort.o
	rm -f printarray.o
	rm -f swap.o
