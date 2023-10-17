#include <vector>
#include "binarySearch.hpp"

using namespace std;

int binarySearch(vector<int>& nums, int key)
{
    int low = 0;
    int high = nums.size()-1;
    int mid = 0;

    while((low <= high))
    {
        mid = (high+low)/2;
        if(nums[mid] == key)
            return mid;
        else
            if(nums[mid] > key)
                high = mid-1;
            else
                low = mid+1;    
    }
    return -1; //means that the element wasn't found
}


