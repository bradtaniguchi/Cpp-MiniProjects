//Bradley Taniguchi
//2/06/16
#include <iostream>
//#include <array> //meh lets struggle

class MyStack { //integer ONLY Stack
    public: 
        int pop();
        void push(int x);
        void printstack();
        MyStack(int maxlength);
    private:
        int maxlength;
        int myarray[];
        int topspot;
};

MyStack::MyStack(int mlength) { //length
    static const int maxlength = mlength;
    //int *myarray = new int[maxlength]; //initalize array
    int myarray[maxlength]; //initalize array
    topspot = 0;
}
int MyStack::pop() {
    if (topspot == 0) { // Stack Empty!
        std::cout << "ERROR Stack Empty" << std::endl;
        return 0;
    } else {
        int bin = myarray[topspot]; // grab top item
        topspot = topspot-1; 
        return bin;
    }
}
void MyStack::push(int x) {
    if (topspot == maxlength-1) {
        std::cout << "STACK FULL!" << std::endl; // I CAN increase stack size...
        return;
    } else {
        std::cout << "TOPSPOT " << topspot << std::endl;
        std::cout << "X: " << x << std::endl;
        myarray[topspot] = x; //add x into stop spot
        //topspot++; //increase stack "up"
        std::cout << "TOPSPOT " << topspot << std::endl;
    }
}
void MyStack::printstack() {
//    std::cout << "PRINTING STACK" << std::endl;
//    std::cout << "MaxLength " << maxlength << std::endl;
    for(int i = 0; i < this->maxlength; i++) {
        std::cout << this->myarray[i] << std::endl;
    }
}



