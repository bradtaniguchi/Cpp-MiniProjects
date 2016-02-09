//Basic swap function, to be used for most sorts in C++

void swap(int* a, int* b) { //given pointers, swap the two numbers
    int bin;
    bin = *a;
    *a = *b;
    *b = bin;
}
