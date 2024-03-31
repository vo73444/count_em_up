#include <iostream>

class GroceryCounter{

    int ten;

    int one;

    int tenth;

    int hundreth;

    int overflows;

    public:

    GroceryCounter(int starter = 0000);

    void tens();

    void ones();

    void tenths();

    void hundreths();

    void decrement_tens();

    void decrement_ones();

    void decrement_tenths();

    void decrement_hundreths();

    std::string total();

    int numberOfOverflows();

    void clear();

};
