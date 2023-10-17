#include <iostream>
#include <vector>
#include "mergeSort.hpp"

using namespace std;


int main(void)
{
    vector<int> numbers{15,3,4,0,88,45,12,79,32,145,88,42,689,32,74,74,788,255,4710};
    mergeSort(numbers, 0, numbers.size()-1);
    for(int val : numbers)
    {
        cout<<val<<", ";
    }    

    return 0;
}