#include <iostream>

int sum(int n1, int n2);
int minus(int n1, int n2);
int multi(int n1, int n2);
int split(int n1, int n2);

int main() {
    sum(2, 2);
    minus(4, 2);
    multi(2, 5);
    split(25, 5);

    std::cout << "It was calculator, yep ;)" << std::endl;

    return 0;
}

int sum(int n1, int n2) {
    return n1 + n2;
}

int minus(int n1, int n2) {
    return n1 - n2;
}

int multi(int n1, int n2) {
    return n1 * n2;
}

int split(int n1, int n2) {
    return n1 / n2;
}