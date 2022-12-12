#include "funcs.h"
#include <iostream>

int main(){
    std::string result;
    result = printRange(-2,10);
    std::cout << result << std::endl;
    
    int x = sumRange(1, 3);
    std::cout << x << std::endl;   // 6
    
    int y = sumRange(-2, 10);
    std::cout << y << std::endl;   // 52
    return 0;
}