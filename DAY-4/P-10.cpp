#include <iostream> 
using namespace std ;

int gcd ( int n, int m ) {
    if ( n%m==0 ) {
        return m ;
    }
    else {
        return gcd(m,n%m) ;
    }
}
int main () {
    int n, m ;
    cout << "Enter the number : " ;
    cin >> n >> m ;
    cout << "GCD is : " << gcd(n,m) ;
}