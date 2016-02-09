#include <iostream>
#include "../masterheaders.h"

void bubblesort(int len, int* arr){ // given len, and array sort this array
    for(int i=0; i<len;i++) {//SORT STUFF
        for(int j=0; j < (len-1); j++) {
            if (*(arr+j) > *(arr+j+1)) {
                swap(arr+j, arr+j+1);
            }
        }
    }  
}
