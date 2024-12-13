#include <iostream> 
using namespace std ;

int sumd ( int n ) {
    if ( n==0 ) {
        return 0 ;
    }
    else {
        return n%10+sumd(n/10) ;
    }
}
int main () {
    int n ;
    cout << "Enter the range : " ;
    cin >> n ;
    cout << "Sum of digit is : " << sumd(n) ;
}