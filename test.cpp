
#include <vector>
#include <algorithm>
#include <iostream>

// write your print vector function here



void addElements(std::vector<int> v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}

int main(){
    std::vector<int> vec = {11, 12, 13, 14, 15};
    //addElements(v, 0, 5);
    int st = vec.begin();

    std::cout << "start: "  v.begin() << " end: " << v.end() << std::endl; 
}