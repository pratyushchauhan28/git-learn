/*
1+ x + x2/2! + x3/3! + x4/4!......
*/
#include <iostream>
using namespace std ;
int fact ( int n ) {
    if ( n==0 ) {
        return 1 ;
    }
    else {
        return n*fact(n-1) ;
    }
}
int main() {
    int n, sum=0 ;
    cout << "Enter the number : " ;
    cin >> n ;
    while (n--) {
        sum+=fact(n) ;
    }
    cout << sum << endl ;
}