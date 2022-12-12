#include "funcs.h"
#include <iostream>

std::string printRange(int left, int right){
    //2,5 -> 2 3 4 5 
    if(right == left){
        return std::to_string(left);
    } else {
        return std::to_string(left) + " " + printRange(left+1,right);
    }
}

int sumRange(int left, int right){
    
}