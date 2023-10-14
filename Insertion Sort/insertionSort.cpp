#include <iostream>
#include <vector>

using namespace std;
void insertionSort(vector<int> &nums)
{
    /*Nested loops:
      Outer loop: iterate on all array elements
      inner loop: compare current outer loop element with rest of the array elements (backward direction)
    */

   for(int i=1;i<nums.size();i++)
   {
        int key = nums[i], j=0;
        for(j = i-1; j>=0;--j)
        {
            if(nums[j] > key)
                nums[j+1] = nums[j];
            else
                break;
        }
        nums[j+1] = key;
   }
}






int main(void)
{
    vector<int> numbers{15,3,4,0,88,45,12,79,32,145,88,42,689,32,74,74,788,255,4710};
    insertionSort(numbers);
    for(int val : numbers)
    {
        cout<<val<<", ";
    }

    return 0;
}