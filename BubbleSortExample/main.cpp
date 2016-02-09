//Bradley Taniguchi
//2/7/16 - SUPERBOWL 50
//BubbleSort on Array
#include <iostream>
#include "headers.h"
#include "../masterheaders.h"

int main() {
    using namespace std;
    cout << "---PreSort---" << endl;
    int myarray[10] = {10,9,8,7,6,5,4,3,2,1}; //ten space array
    int* myarrayPtr = myarray;
    printarray(10, myarrayPtr);
    bubblesort(10, myarrayPtr); // sorts the array above in memory
    cout << "---PostSort---" << endl;
    printarray(10, myarrayPtr);

    return 0;
}


