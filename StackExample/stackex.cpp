//Bradley Taniguchi
//Stack example
//going to split stuff for fun

#include <iostream>
#include "BradHeaders.h" //import mystack

int main(int argc, char* argv[]) {
    MyStack mystack(5); //new stack
    mystack.printstack();
    mystack.pop(); // -1!
    mystack.push(10);
    mystack.push(5);
    mystack.push(7);
    mystack.printstack();
    mystack.pop();
    mystack.pop();
    mystack.printstack();
    mystack.pop();
    mystack.printstack();
}
