//Strong numbers less than or equal to N
#include <iostream> 
using namespace std ;

int fact ( int n ) {
    if ( n==0 ) 
        return 1 ;
    else
        return n*fact(n-1) ; 
}
bool strong ( int n ) {
    int sum=0, x=n ;
    while (n!=0) {
        sum+=fact(n%10) ;
        n/=10 ;
    }
    if (x==sum ) 
        return 1 ;
    else 
        return 0 ;
}

int main() {
    int m ;
    cout << "Enter a number : " ;
    cin >> m ;
    while (m) {
    int n=m ;
    if ( strong(n) ) {
        cout << n << " is a strong number" << endl ;
    }
    else {
        cout << n << "is not a strong number" << endl ;
    }
    m-- ;
    }
}