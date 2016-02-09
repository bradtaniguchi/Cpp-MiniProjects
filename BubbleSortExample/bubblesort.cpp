#include <iostream>

void swap(int* a, int* b) { // given pointers, swap the two numbers
    int bin;
    bin = *a; //get whats at a and put in bin
    *a = *b; // gets whats in b and puts in a
    *b = bin; // puts what is in bin and puts into b

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
