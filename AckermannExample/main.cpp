//Bradley Taniguchi
//Ackermann Function

#include <iostream>
int ackermann(int m, int n) {
    if (m == 0) {
//        std::cout << "<";
        return n + 1;
    }
    if (n == 0) {
//        std::cout << ">" << "Func(" << m <<"-1,1";
        return ackermann(m-1,1);//EVIL
    }
//    std::cout << ">" << "Func(" << m <<"-1,Func("<< m << "," << n <<"-1))";
    return ackermann(m-1,ackermann(m,n-1)); //DR. EVIL level EVIL
}
int main() {
    for(int m = 0; m < 5; m++) {
        for(int n = 0; n < 11; n++) {
            std::cout << "A(" << m << ", " << n << ") = " << ackermann(m,n) << "\n";
        }
    }
    return 0;
}

