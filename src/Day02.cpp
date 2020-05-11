// Day 02 - 28-04-2020
// Given an array of integers, return the product of numbers excluding the i'th index number at the same index
#include "Day02.h"

std::vector<int> MultiplyArray::multiply_array(const std::vector <int> multiply_input_array_)
{
    std::vector<int> copy_input;
    std::vector <int> new_array;
    for(int i = 0; i < multiply_input_array_.size(); i++)
    {
        copy_input = multiply_input_array_;
        copy_input.erase(copy_input.begin()+i);
        auto multi = std::accumulate(begin(copy_input), end(copy_input), 1, std::multiplies<>());
        new_array.push_back(multi);
    }
    return new_array;
}