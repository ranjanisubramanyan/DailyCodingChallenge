#pragma once
#ifndef DAY01_H
#define DAY01_H

#include<iostream>
#include<vector>

class CheckArrayForKSum
{
    public:
    struct input_from_user{
        int number_of_elements;
        int k_sum;
        std::vector <int> input_array;
    }input_set;
    bool find_sum(const std::vector <int> numbers_, const int k_, const int n_);
};
#endif