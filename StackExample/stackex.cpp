//Bradley Taniguchi
//Stack example
//going to split stuff for fun

#include <iostream>
#include "BradHeaders.h" //import mystack

int main(int argc, char* argv[]) {
    MyStack mystack(5); //new stack
    mystack.printstack();
    mystack.push(10);
//    mystack.push(5);
    mystack.printstack();
//    mystack.push(10);
//    mystack.printstack();
//    std::cout << "POP" << mystack.pop() << std::endl;
//    mystack.printstack();
}
