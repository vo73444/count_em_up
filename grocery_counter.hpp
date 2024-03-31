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

    std::string total();

    int numberOfOverflows();

    void clear();

};
