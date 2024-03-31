#include <iostream>
#include <string>
#include <array>
#include "grocery_counter.hpp"

using namespace std;

GroceryCounter::GroceryCounter(int starter){
    if(starter > 9999 || starter < 0){
        ten = one = tenth = hundreth = 0;
    }
    else{
        hundreth = starter % 10;
        starter /= 10;
        tenth = starter % 10;
        starter /= 10;
        one = starter % 10;
        starter /= 10;
        ten = starter % 10;
    }

    overflows = 0;
}

void GroceryCounter::tens(){
    if(ten == 9){
        ten = 0;
        overflows += 1;
    }
    else{
    ten += 1;
    }
}

void GroceryCounter::ones(){
    if(one == 9){
        tens();
        one = 0;
    }
    else{
    one += 1;
    }
}

void GroceryCounter::tenths(){
    if(tenth == 9){
        ones();
        tenth = 0;
    }
    else{
    tenth += 1;
    }
}

void GroceryCounter::hundreths(){
    if(hundreth == 9){
        tenths();
        hundreth = 0;
    }
    else{
    hundreth += 1;
    }
}

void GroceryCounter::decrement_tens(){
    if(ten == 0){
        ten = 0;
    }
    else{
    ten -= 1;
    }

}

void GroceryCounter::decrement_ones(){
    if(one == 0){
        one = 0;
    }
    else{
    one -= 1;
    }

}

void GroceryCounter::decrement_tenths(){
    if(tenth == 0){
        tenth = 0;
    }
    else{
    tenth -= 1;
    }

}

void GroceryCounter::decrement_hundreths(){
    if(hundreth == 0){
        hundreth = 0;
    }
    else{
    hundreth -= 1;
    }

}

string GroceryCounter::total(){

    ten = ten % 10;

    one = one % 10;

    tenth = tenth % 10;

    hundreth = hundreth % 10;

    if(ten == 0){
        return "$" + to_string(one) + "." + to_string(tenth) + to_string(hundreth);
    }

    return "$" + to_string(ten) + to_string(one) + "." + to_string(tenth) + to_string(hundreth);
    
}

int GroceryCounter::numberOfOverflows(){
    return overflows;
}

void GroceryCounter::clear(){
    ten = one = tenth = hundreth = overflows = 0;
}
