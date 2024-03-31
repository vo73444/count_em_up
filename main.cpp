#include <iostream>

using namespace std;

int main(){

    int sum = 8594;

    int hundreth = sum % 10;

    sum /= 10;

    int tenth = sum % 10;

    sum /= 10;

    int ones = sum % 10;

    sum /= 10;

    int tens = sum % 10;

    cout << tens << "\t" << ones << "\t" << tenth << "\t" << hundreth;

    return 0;
}
