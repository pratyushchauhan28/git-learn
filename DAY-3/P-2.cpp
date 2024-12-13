/*
   1
  2 3
 3 4 5
4 5 6 7
*/
#include <iostream>
using namespace std ;
int main () {
    int n, d=1 ; 
    cout << "Enter a number : " << endl ;
    cin >> n ;
    for ( int i=1; i<=n; i++ ) {
        for ( int j=0, d=0; j<n; j++ ) {
            if ( j<n-i ) 
                cout << " " ;
            else 
                cout << d+++i << " " ;
        }
        cout << endl ;
    }
}