#include <iostream>

void multi_table();

int main() {
    multi_table();
    return 0;
}

void multi_table() {
    std::cout << "1     2     3     4     5     6" << std::endl;
    std::cout << "2     4     6     8    10    12" << std::endl;
    std::cout << "3     6     9    18    27    36" << std::endl;
    std::cout << "4     8    12    16    20    24" << std::endl;
    std::cout << "5    10    15    20    25    30" << std::endl;
    std::cout << "6    12    18    24    30    36" << std::endl;
}