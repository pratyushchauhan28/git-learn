/*
1
2 3
4 5 6 
7 8 9 10
*/

#include <iostream>
using namespace std ;
int main () {
    int n, d=1 ; 
    cout << "Enter a number : " << endl ;
    cin >> n ;
    for ( int i=1; i<=n; i++ ) {
        for ( int j=0; j<i; j++ ) {
            cout << d++ << " " ;
        }
        cout << endl ;
    }
}