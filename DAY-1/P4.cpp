//check whether the year entered by the user is a leap year or not.
#include <iostream>
using namespace std ;
int main () {
    int year ; 
    cout << "enter the year : " ;
    cin >> year ;
    if ( ( year%4==0 && year%100!=0 ) || (year%400 ==0 ) ) {
        cout << "It's a leap year!!! " ;
    }
    else {
        cout << "It's not a leap year!!! " ;
    }
    return 0 ;
}