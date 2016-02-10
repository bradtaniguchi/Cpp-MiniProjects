/*Bradley Taniguchi
* C++ Merge Sort Implimentation, 
* First attempt to impliment
*
* I know MergeSort uses Divide and Conquer.
* the idea is to split the array in half every time
* until you get 2 items, which are compared, and sorted
* DEFINANTLY BETTER TO USE VECTORS this time around! 
* currently building..
*/ 

#include <vector> //save me vectors!
using namespace std; //cut down on spam
vector<int> merge(vector<int> vector1 , vector<int> vector2) { 
    //returns int vector of the two added vectors
    int arr[] = {1,2,3}; // normal array, TEST
    //initialize vector with array
    vector<int> myvec (arr, arr+sizeof(arr)/ sizeof(arr[0])); 
    return myvec;
}
vector<int> mergesort(vector<int> myvector) {
    //returns sorted vector
    if (sizeof(myvector) < 0) return myvector; 
}

