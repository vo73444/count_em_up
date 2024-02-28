#include <iostream>
#include "grocery_counter.hpp"

using namespace std;

int main(){

    GroceryCounter counter;

    counter.tens();
    counter.ones();

    cout << counter.total() << endl;

    return 0;
}
