//Find the no of leap years in a range of years
#include <iostream> 
using namespace std ;

int main () {
    int urange, lrange, ans=0 ;
    cout << "Enter the range of years : " ;
    cin >> lrange >> urange ;
    lrange += 4-lrange%4 ;
    while ( lrange <= urange ) {
        if ( (lrange%4==0 && lrange%100!=0) || (lrange%400==0) ) 
            ans++ ;
        lrange+=4 ;
    }
    cout << "The number of leap year is " << ans ;
    return 0 ;
}