//Bradley Taniguchi
//Basic integer array printer
#include <iostream>

void printarray(int len, int* arr) {//given len, and array print it
    for(int i=0; i<len; i++) {
        std::cout << " " << *(arr+i);
    }
    std::cout << std::endl;
}
