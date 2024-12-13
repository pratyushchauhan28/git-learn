#include <iostream> 
using namespace std ;

int prime ( int n, int p ) {
    if ( n%p==0 ) {
        return 1 ;
    }
    else if ( p>n/2 ){
        return 0 ;
    }
    else {
        return prime(n,p+1) ;
    }

}
int main () {
    int n1, n2 ;
    cout << "Enter the range : " ;
    cin >> n1 >> n2 ;
    while ( n1<n2 ) {
        int n=n1;
        if ( prime(n,2)==0 ) {
            cout << n << " is a prime number" << endl ;
        }
        else {
            cout << n << "is not a prime number" << endl ;
        }
        n1++ ;
    }
}