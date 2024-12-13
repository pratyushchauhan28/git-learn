/*Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................
*/
#include <iostream> 
using namespace std ;

int series1 ( int n ) {
    int i=1, fact=1, ans=0;
    while ( i<=n ) {
        if ( i<n )
            cout << i << "!+ " ;
        else    
            cout << i << "! = " ;
        fact*=i;
        ans+=fact;
        i++;
    }
    return ans ;
}

int series2 ( int n ) {
    int i=1, fact=1, ans=1, sum=0;
    while ( i<=n ) {
        if ( i<n ) 
            cout << i << "! + " ;
        else
            cout << i << "! = " ;
        ans*=(fact*i)/i;
        sum+=ans;
        i++;
    }
    return sum;
}

int series3 ( int x, int n ) {
    int i=1, ans=1, sum=0;
    cout << 1 << "+ " ;
    while ( i<=x ) {
        cout << n << "^" << i << "/" << i << "!+ ";
        ans=ans*(n*(-1))/i ;
        sum+=ans;
        i++;
    }
    return sum ;
}
int main() {
    int n, x ;
    cout << "Enter the numbers : " ;
    // cin >> n >> x;
    cin >> n;
    // cout << series3(x,n);
    cout << series2(n) ;
}