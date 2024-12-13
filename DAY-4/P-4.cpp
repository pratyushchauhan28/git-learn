#include <iostream> 
using namespace std ;

int perfect ( int n, int p ) {
    if ( p>n/2 ) {
        return 0 ;
    }
    else if (n%p==0) {
        return p+perfect(n,p+1) ;
    } 
    else {
        return perfect(n,p+1) ;
    }

}
int main () {
    int num ;
    cout << "Enter a number : " ;
    cin >> num ;
    while ( num ) {
        int n=num ;
        if ( perfect(n,1)==n ) {
            cout << n << " is a perfect number" << endl ;
        }
        else {
            cout << n << "is not a perfect number" << endl ;
        }
        num-- ;
    }
}