//Bradley Taniguchi
//2/7/16 - SUPERBOWL 50
//BubbleSort on Array
#include <iostream>

void swap(int* a, int* b);
void printarray(int len, int* arr);
void bubblesort(int len, int* arr);
int counter=0; //global counter
int main() {
    using namespace std;
    cout << "---In Main---" << endl;
    cout << "counter before: " << counter << endl;
    int myarray[10] = {10,9,8,7,6,5,4,3,2,1}; //ten space array
    int* myarrayPtr = myarray;
    printarray(10, myarrayPtr);
    bubblesort(10, myarrayPtr); // sorts the array above in memory
    printarray(10, myarrayPtr);
    cout << "counter after: " << counter << endl;
    cout << "---End Main---" << endl;
    return 0;
}
void swap(int* a, int* b) { // given pointers, swap the two numbers
    int bin;
    counter++; //increment counter
//    std::cout << "Swaping a: " << *a << " b: " << *b << std::endl;
    bin = *a; //get whats at a and put in bin
    *a = *b; // gets whats in b and puts in a
    *b = bin; // puts what is in bin and puts into b

}
void printarray(int len, int* arr) { //given len, and array print it
    using namespace std;
    for(int i =0; i < len; i++) {
        cout << " " <<*(arr+i);
    }
    cout << endl;
}

void bubblesort(int len, int* arr){ // given len, and array sort this array
    for(int i=0; i<len;i++) {//SORT STUFF
        for(int j=0; j < (len-1); j++) {
            if (*(arr+j) > *(arr+j+1)) {
                swap(arr+j, arr+j+1);
            }
        }
    }
        
}
