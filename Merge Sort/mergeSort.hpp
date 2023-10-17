
#ifndef MERGESORT_HPP
#define MERGESORT_HPP
#include <vector>
using namespace std;

void mergeSort(vector<int>&nums, int start, int end);
void merge(vector<int>&nums, int start, int midpoint, int end);

#endif