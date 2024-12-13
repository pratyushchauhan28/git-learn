//Program to find if the given no is a palindrome
#include <iostream> 
using namespace std ;

int rv (int n, int r) {
    if ( n==0 ) {
        return r ;
    }
    else{
        r=r*10 + (n%10) ;
        return rv(n/10,r);
    }
}

static int count=1 ;
int rev ( int n ) {
    if ( n==0 ) {
        return 0 ;
    }
    else{
        return 10*rev(n/10) + n%((count++)*10);
    }
}

int main() {
    int n, ans=0, rev=0 ;
    cin >> n ;
    rev=rv(n,rev) ;
    cout << rev << endl;
    // while (n!=0) {
    //     ans=ans*10+(n%10) ;
    //     n/=10 ;
    // }
    // cout << ans << endl ;
}