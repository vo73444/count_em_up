#include <iostream>
#include <string>
#include "grocery_counter.hpp"

using namespace std;

GroceryCounter::GroceryCounter(){
    ten = one = tenth = hundreth = 0;

    overflows = 0;
}

void GroceryCounter::tens(){
    ten += 1;
}

void GroceryCounter::ones(){
    one += 1;
}

void GroceryCounter::tenths(){
    tenth += 1;
}

void GroceryCounter::hundreths(){
    hundreth += 1;
}

string GroceryCounter::total(){

    return "$" + to_string(ten) + to_string(one) + "." + to_string(tenth) + to_string(hundreth);
    
}
