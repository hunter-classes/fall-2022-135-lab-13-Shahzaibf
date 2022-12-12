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
    if(left == right){
        return left;
    } else{
        return left + sumRange(left + 1, right);
    }
}

int sumArray(int *arr, int size){     
    return sumArrayInRange(arr,0,size-1); 
}  

int sumArrayInRange(int *arr, int left, int right){     
    if(left > right){         
        return 0;     
    } else {         
        return arr[left]+sumArrayInRange(arr,left+1,right);     
    }
}