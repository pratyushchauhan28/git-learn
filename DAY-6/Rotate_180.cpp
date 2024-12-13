#include <iostream>
using namespace std; 
void swape ( int &a, int &b ) {
    int temp=a ;
    a=b;
    b=temp;
}

int main () {
    int m, n;
    cout << "Enter the order of matrix: " ; 
    cin >> m >> n;
    int a[m][n];

//INPUT ARRAY
    for ( int i=0; i<m; i++ ) {                 
        for ( int j=0; j<n; j++ ) {
            cin >> a[i][j] ;
        }
    }

//PRINTING ORIGINAL ARRAY
    for ( int i=0; i<m; i++ ) {                 
        for ( int j=0; j<n; j++ ) {
            cout << a[i][j] << " ";
        }
        cout << endl ;
    }

//ROTATING ARRAY
    for ( int i=0; i<n/2; i++ ) {                 
        for ( int j=0; j<n; j++ ) {
            swape ( a[i][j], a[n-1-i][n-1-j] );
        }
    }
    if ( n%2!=0 ) {
        int c=n/2;
        for ( int i=0; i<n/2; i++) {
            swap ( a[c][i], a[c][n-1-i] );
        }
    }

//PRINTING ROTATED ARRAY
    cout << "Rotated array : " << endl ;
    for ( int i=0; i<m; i++ ) {                 
        for ( int j=0; j<n; j++ ) {
            cout << a[i][j] << " ";
        }
        cout << endl ;
    }

}