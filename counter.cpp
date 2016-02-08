//Bradley Taniguchi
//Basic Counter class
//nice boilerplate...
//add array counter, for multiple counters to count multiple things
#include <iostream>

class Counter { 
    public:
        void incr();
        int getcount();
        Counter();
        Counter(int size);
    private:
        int *arrPtr;
        int counter;
};

Counter::Counter() { //single 
    counter = 0;
}
Counter::Counter(int size) {
    arrPtr = new int[size]; 
    arrPtr[0] = 0; //Different implimentation
}
void Counter::incr() {
    counter++;
}
int Counter::getcount() {
    return counter;
}
