
#PRIMARY PROGRAM CREATION
#Do I need headerfiles??
all: app clean

app: main.o insertionsort.o printarray.o swap.o 
	g++ main.o insertionsort.o printarray.o swap.o -o app

main.o: main.cpp insertionsort.o ../printarray.o ../swap.o 
	g++ -c main.cpp -o main.o

insertionsort.o : insertionsort.cpp ../swap.o
	g++ -c insertionsort.cpp -o insertionsort.o


#OTHER DIRECTORY ITEMS
#make the .o files IN CURRENT DIR!

printarray.o: ../printarray.cpp 
	g++ -c ../printarray.cpp -o printarray.o

swap.o: ../swap.cpp 
	g++ -c ../swap.cpp -o swap.o

clean:
	rm swap.o main.o insertionsort.o printarray.o
