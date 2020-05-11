#include "Day05.h"

int FindLargestSum::findSum(const std::vector<int> input_message_){
    int excl = 0;
    int incl = input_message_.at(0);
    int new_excl;
    for(int i = 1; i < input_message_.size(); i++){
        new_excl = (incl > excl) ? incl : excl;
        incl = excl + input_message_.at(i);
        excl = new_excl;
    }
    return ((incl > excl) ? incl : excl);
}