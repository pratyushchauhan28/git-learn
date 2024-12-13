#include<iostream>
using namespace std ;

void pattern1(int n) {
    for ( int i=0; i<n; i++ ){
        for ( int j=0; j<n*2-1; j++ ) {
            if ( j<n-i ) {
                cout << j+1 << " " ;
            }
            else if (j<n+i-1) {
                cout << "  " ;
            }
            else {
                cout << 2*n-j-1 << " " ;
            }
        }
        cout << endl ;
    }
}
int main(){
    int n;
    cin >> n ;
    pattern1(n);
}