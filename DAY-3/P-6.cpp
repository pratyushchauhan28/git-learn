/*
      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4
*/
#include <iostream>
using namespace std ;
int main () {
    int n ; 
    cout << "Enter a number : " << endl ;
    cin >> n ;
    for ( int i=1; i<=n; i++ ) {
        int ans = i ;
        for ( int j=0; j<n+i-1; j++ ) {
            if ( j<n-i ) {
                cout << "  " ;
            }
            else if ( j<n ) {
                cout << n-j << " ";
            }
            else {
                cout << ans++ << " ";
            }
        }
        cout << endl ;
    }
}