//Bradley Taniguchi
//2/7/16 - SUPERBOWL 50
//BubbleSort on Array
#include <iostream>
#include "headers.h"

void swap(int* a, int* b);
void printarray(int len, int* arr);
void bubblesort(int len, int* arr);
int main() {
    using namespace std;
    cout << "---In Main---" << endl;
    int myarray[10] = {10,9,8,7,6,5,4,3,2,1}; //ten space array
    int* myarrayPtr = myarray;
    printarray(10, myarrayPtr);
    bubblesort(10, myarrayPtr); // sorts the array above in memory
    printarray(10, myarrayPtr);
    cout << "---End Main---" << endl;
    return 0;
}

void printarray(int len, int* arr) { //given len, and array print it
    using namespace std;
    for(int i =0; i < len; i++) {
        cout << " " <<*(arr+i);
    }
    cout << endl;
}

