//Armstrong number in the range 
#include <iostream>
using namespace std ; 

int arm(int n, int c) {
    if (n%10==0) {
        return 0 ;
    }
    else if ()
}
int main () {
    int n, m ; 
    cout << "Enter the range : " ;
    cin >> n >> m ; 
    while ( n<m ) {
        int s=n, count=0 ;
        while (s) {
            s/=10;
            count++ ;
        }
        if ( arm(n,count)==n ) 
            cout << n << "is a armstrong number." << endl ;
        else 
            cout << n << "is not a armstrong number." << endl ;
        n++ ;
    }
}