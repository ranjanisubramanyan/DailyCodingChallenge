// Day 01 - 27-04-2020.
// Given an array of numbers , for example , [10, 15, 3, 7] return if there are any pairs
// in the array that add to yield 'k', for example, 17.
#include "Day01.h"

bool CheckArrayForKSum::find_sum(const std::vector <int> numbers_, const int k_, const int n_)
{
    bool k_sum = false;
    for(int j = 0; j < n_-1; j++)
    {
        for(int j1 = 1; j1 < n_; j1++)
        {
            if(numbers_.at(j) + numbers_.at(j1) == k_)
            {
                k_sum = true;
                goto end_the_iteration;
            }
        }
    }
    end_the_iteration:
    return k_sum;
}
