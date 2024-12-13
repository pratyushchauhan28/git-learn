/*
There are some rules set for the Electricity Bill generation in our State. Please check these rules and calculate the Electicity bill with the given unit of consumption: 1.Unit consumption upto 200 - Zero charges, 2. Unit consumption from 201 to 400 - 6 Rs per unit, 3. Unit consumption from 401 to 600 - 7 Rs per unit, 4. Unit consumption from 601 & above - 8 Rs per unit. Apart from this a fixed charge of Rs. 220 is charged with every bill. There is an extra charge of electricity duty @5% for the entire bill. Given the number of units of consumption, calculate the total bill. 
*/
#include <iostream> 
using namespace std ;

int main () {
    int unit, bill=0 ;
    cout << "Enter the unit consumed : " ;
    cin >> unit ;
    if ( unit > 600 ) {
        bill += (unit-600)*8 ;
        unit = 600 ; 
    }
    if ( unit > 400 ) {
        bill += (unit-400)*7 ;
        unit = 400 ;
    }
    if ( unit > 200 ) {
        bill += (unit-200)*6 ;
        unit = 200 ;
    }
    bill += 220 ;
    bill += (5*bill)/100 ;
    cout << "The total bill is : " << bill ;
    return 0 ;
}