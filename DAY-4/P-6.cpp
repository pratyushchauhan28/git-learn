//LCM of two numbers using recursion 
#include <iostream>
using namespace std ;

int lcm ( int n, int m, int r ) {
    if ( r%n==0 ) 
        return r ;
    else 
        return lcm(n,m,r+m) ;
}
int main () {
    int n, m, g, s ;
    cout << "Enter the numbers : " ; 
    cin >> n >> m ; 
    if ( m>n ){
        g=m; s=n;
    } 
    else {
        g=n; s=m;
    }
    cout << "LCM of the numbers is : " << lcm(s,g,m) ;
}