#include<iostream>
using namespace std ;

void pattern1 ( int n ) {
    for ( int i=1; i<=n; i++ ) {
        for ( int j=1; j<=i; j++ ) {
            cout << j << " " ;
        }
        cout << endl ;
    }
    cout << endl;
}

void pattern2 ( int n ) {
    for ( int i=1; i<=n; i++ ) {
        for ( int j=1; j<=i; j++ ) {
            cout << i << " " ;
        }
        cout << endl ;
    }
    cout << endl;
}

void pattern3 ( int n ) {
    int s=0;
    for ( int i=1; i<=n; i++ ) {
        for ( int j=1; j<=i; j++ ) {
            cout << ++s << " " ;
        }
        cout << endl ;
    }
    cout << endl;
}

void pattern4 ( int n ) {
    for ( int i=1; i<=n; i++ ) {
        for ( int j=1; j<=i; j++ ) {
            cout << char(j+64) << " " ;
        }
        cout << endl ;
    }
    cout << endl;
}

void pattern5 ( int n ) {
    int s=0;
    for ( int i=1; i<=n; i++ ) {
        for ( int j=1; j<=i; j++ ) {
            cout << char(++s+64) << " " ;
        }
        cout << endl ;
    }
    cout << endl;
}

void pattern6 ( int n ) {
    int s=0;
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<n; j++ ) {
            if ( j<n-i-1 ) {
                cout << "  " ;
            }
            else {
                cout << "* " ;
            }
        }
        cout << endl ;
    }
    cout << endl;
}

void pattern7 ( int n ) {
    int s=0;
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<n+i+1; j++ ) {
            if ( j<n-i-1 ) {
                cout << "  " ;
            }
            else {
                cout << "* " ;
            }
        }
        cout << endl ;
    }
    cout << endl;
}

int main () {
    int n;
    cin >> n ;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
}