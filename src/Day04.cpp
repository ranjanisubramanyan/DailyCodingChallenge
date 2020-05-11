#include "Day04.h"

int DecodeTheMessage::decodeMessage(const std::string input_message_){
    int possibilities = 0;
    if (input_message_.rfind("0", 0) == 0) {
        return possibilities;
    }
    else if (input_message_.find("0") != std::string::npos) {
        possibilities = 0;
        for(int i = 0; i < input_message_.length()-1; i++){
            std::string part = input_message_.substr(i, 2);
            if ((stoi(part) <= 26) && (part.rfind("0", 0) != 0)){
                possibilities += 1;
            }
        }
    } 
    else{
        possibilities = 1;
        for(int i = 0; i < input_message_.length()-1; i++){
            if (stoi(input_message_.substr(i, 2)) <= 26){
                possibilities += 1;
            }
        }   
    }
    return possibilities;
}