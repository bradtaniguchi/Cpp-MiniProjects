/*Bradley Taniguchi
* C++ Merge Sort Implimentation, 
* First attempt to impliment
*
* I know MergeSort uses Divide and Conquer.
* the idea is to split the array in half every time
* until you get 2 items, which are compared, and sorted
* DEFINANTLY BETTER TO USE VECTORS this time around! 
* currently building..
* TOP DOWNIMPLEMENTATION
*/ 

#include <vector> //save me vectors!
#include "../masterheaders.h"

using namespace std; //cut down on spam
vector<int> merge(vector<int> vector1 , vector<int> vector2) { 
    //returns int vector of the two added vectors
    vector<int> myvec;
    myvec.reserve(vector1.size() + vector2.size());
    myvec.insert(myvec.end(), vector1.begin(), vector1.end());
    myvec.insert(myvec.end(), vector2.begin(), vector2.end());
    return myvec;
}
vector<int> mergesort(vector<int> myvector, int left, int right) {
    //returns sorted vector

    if (sizeof(myvector) == 1) return myvector; //1 item return, as 1 item is sorted
    //vector<int> leftvector;
    //vector<int> rightvector;
    for(vector<int>::iterator x = myvector.begin(); x != myvector.end(); ++x) { 
        //iterate vector
        //if myvector[x] is ODD {add x to left}
        //else {add x to right}
    }

}

