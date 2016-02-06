//Brad Headers, to link and for make practice
class MyStack {
    public:
        int pop();
        void push(int x);
        void printstack();
        MyStack(int maxlength);
    private:
        int maxlength;
        int myarray[];
        int topspot;
};

