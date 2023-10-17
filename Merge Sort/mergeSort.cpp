#include <vector>
#include "mergeSort.hpp"

using namespace std;

void mergeSort(vector<int>&nums, int start, int end)
{
    if(start < end)
    {
        int midpoint =(end + start)/2;
        mergeSort(nums, start, midpoint);
        mergeSort(nums, midpoint+1, end);
        merge(nums, start, midpoint, end);
    }
}

void merge(vector<int>&nums, int start, int midpoint, int end)
{
    int i, j, k;
    int left_length = midpoint - start;
    int right_length = end - midpoint +1;
    vector<int> left_arr, right_arr;
    for(i=0;i<=left_length;i++)
    {
        left_arr.push_back(nums[i+start]);
    }
    for(i=0;i<=right_length;i++)
    {
        right_arr.push_back(nums[i+midpoint+1]);
    }    
    
    i=0; j=0; k = start;

    while(i <= left_length && j <= right_length)
    {
        if(left_arr[i] < right_arr[j])
        {
            nums[k] = left_arr[i];
            i++;
        }else
        {
            nums[k] = right_arr[j];
            j++;
        }
        k++;
    }
    while(i < left_length)
    {
        nums[k] = left_arr[i];
        i++;
        k++;
    }
    while(j < right_length)
    {
        nums[k] = right_arr[j];
        j++;
        k++;
    }     
}