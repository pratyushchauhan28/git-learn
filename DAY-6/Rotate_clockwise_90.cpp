#include<iostream>
using namespace std ;

int main() {
    int n, m;
    cin >> m >> n ;
    int a[m][n] ;
        
//ARRAY INPUT 
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
        
//ROTATING ARRAY CLOCKWISE
    for ( int i=0; i<n/2; i++ ) {            
        for ( int j=i; j<n-1-i; j++ ) {
            int temp=a[i][j];
            a[i][j]=a[n-1-j][i];
            a[n-1-j][i]=a[n-1-i][n-1-j];
            a[n-1-i][n-1-j]=a[j][n-1-i];
            a[j][n-1-i]=temp;
        }
    }   
    
//PRINTING ROTATED ARRAY
    cout << "Rotated matrix: " << endl ;
    cout << endl ;
    for ( int i=0; i<m; i++ ) {
        for ( int j=0; j<n; j++ ) {
            cout << a[i][j] << " ";
        }
        cout << endl ;
    }
    return 0;
}