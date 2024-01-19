#include "vector_functions.h"
#include <algorithm>
#include <iostream>

// write your print vector function here

int countMultiplesOfFive(std::vector<int> v/*take a vector of ints here*/)
{
    int multiple_number = 0;
    for (int i = 0; i < v.size(); i++){
        if (int(v[i] % 5) == 0){
            multiple_number += 1;
        }
    }
    return multiple_number;
}


void addElements(std::vector<int> v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}

bool count_Five(int n){
    return n % 5 == 0;
}