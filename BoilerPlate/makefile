# Version 1 boilerplate makefile
# makefile tutorial: http://www.gnu.org/software/make/manual/make.html#Simple-Makefile

#------------
#compiler set for c++
CC=g++
#-------------
#TO DO LIST FOR MAKE:
all: app clean 

app: main.cpp headers.h 
	$(CC) main.cpp -o main.o

clean: 
	rm -f $(app)
