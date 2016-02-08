//Bradley Taniguchi
//New Version of Stack
//Help gotten from: http://gauss.ececs.uc.edu/Courses/C321/html/stack++.html
#include <iostream>

class MyStack { //integer ONLY Stack
    public: 
        int pop();
        void push(int x);
        void printstack();
        MyStack(int maxlength);
    private:
        int *s; //pointer to stack
        int top; //index of stack
        int maxelem;
};

MyStack::MyStack(int size) {
    top = 0;
    maxelem = size;
    s = new int[maxelem];
}
int MyStack::pop() { //returns myitem
    if (top == 0) return -1;
    return s[--top];
}
void MyStack::push(int t) {
    if (top == maxelem) return;
    s[top++] = t;
}
void MyStack::printstack() {
    if (top == 0) {
        std::cout << "empty" << std::endl; 
        return;
    }
    std::cout << "STACK: ";
    for (int t=0; t < top; t++) {
        std::cout << s[t] << " ";
    }
    std::cout << "\n";
}


