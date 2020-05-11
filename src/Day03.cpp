// Day 03 - 29-04-2020
// Given an array of positive or negative numbers, return the least positive missing integer in the array

#include "Day03.h"

int FindLeastPositiveInteger::least_positive_integer(const std::vector <int> input_array_){
    int max = *max_element(input_array_.begin(), input_array_.end());
    std::vector <int> test_array(max+1);
    for(int i = 0; i < input_array_.size(); i++){
        if(input_array_.at(i) > 0){
            test_array.at(input_array_.at(i)) = 1;
        }
    }
    test_array.erase (test_array.begin());
    std::vector<int>::iterator itr = std::find(test_array.begin(), test_array.end(), 0);
    if (itr != test_array.cend()) {
        return (std::distance(test_array.begin(), itr))+1;
					
	}
	else {
		return max+1;
	}
}