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
    private:
        int *arrPtr;
        int counter;
};

Counter::Counter() { //single 
    counter = 0;
}
void Counter::incr() {
    counter++;
}
int Counter::getcount() {
    return counter;
}
