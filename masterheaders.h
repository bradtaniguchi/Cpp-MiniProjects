//Master Header files, to give access to counter, and printarray functions
//

class Counter {
    public:
        void incr();
        int getcount();
        Counter();
    private:
        int* arryPtr;
        int counter;
};

void printarray(int len, int* arr);
