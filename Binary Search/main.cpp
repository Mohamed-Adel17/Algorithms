#include <iostream>
#include <vector>
#include "binarySearch.hpp"

using namespace std;

int main(void)
{
    int n=0;
    vector<int> nums{5,10,15,16,20,21,29,34,48,96,103};

    int keyIndex = binarySearch(nums, 103);

    if(keyIndex == -1)
        cout<<"Element Not Found"<<endl;
    else
        cout<<"Element index = "<<keyIndex<<endl;

    return 0;
}