#include <iostream>
#include "grocery_counter.hpp"

using namespace std;

int main(){

    GroceryCounter counter = GroceryCounter(1000);

    for(int i = 0; i < 9; i++){
        counter.tenths();
    }
    cout << counter.total() << endl;

    for(int j = 0; j < 10; j++){
        counter.decrement_tenths();
    }

    cout << counter.total() << endl;

    counter.hundreths();

    cout << counter.total() << endl;

    counter.decrement_hundreths();

    cout << counter.total() << endl;

    counter.clear();

    cout << counter.total() << endl;

    for(int i = 0; i < 9; i++){
        counter.tens();

        counter.ones();
    }

    counter.hundreths();

    cout << counter.total() << endl;

    counter.ones();

    cout << counter.total() << "\n" << counter.numberOfOverflows() << endl;


    return 0;
}
