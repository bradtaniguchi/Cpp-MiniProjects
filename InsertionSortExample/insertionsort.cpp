//Bradley Taniguchi
//Insertion sort example
#include "../masterheaders.h"

void insertionsort(int len, int* arr) {
    Counter mycount; //create counter 
    for(int i=0; i<len; i++) {
        int j=i;
        while(j > 0 and (arr[j-1] > arr[j])) {
            mycount.incr(); //increase counter
            swap(arr+j, arr+j-1);
            j = j-1;
        }
    }
}
