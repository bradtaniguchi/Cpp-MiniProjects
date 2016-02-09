//Bradley Taniguchi
////2/9/16 
//InsertionSort on Array
#include <iostream>
#include "headers.h"
#include "../masterheaders.h" //for Counter and printarray

int main() {
    using namespace std;
    int myarray[10] = {10,9,8,7,6,5,4,3,2,1}; 
    int* myarrayPtr = myarray;
    cout << "InsertionSort" << endl;
    cout << "---PreSort---" << endl;
    printarray(10, myarrayPtr);
    cout << "---PostSort---" << endl;
    insertionsort(10, myarrayPtr);
    printarray(10, myarrayPtr);
    return 0;
}
