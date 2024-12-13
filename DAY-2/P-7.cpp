/*
Write a program to find the sum of the series using the function. a) 1/1!-2/3!+3/5!-4/7!+…
*/
#include <iostream>
using namespace std ;
int fact ( int n ) {
    if ( n==0 ) {
        return 1 ;
    }
    else {
        return n*fact(n-1) ;
    }
}
int main() {
    int n, sum=0 ;
    cout << "Enter the number : " ;
    cin >> n ;
    int i=1 ;
    while (i<=n) {
        sum+=i/(fact(i))*-1;
        i++;
    }
    cout << sum << endl ;
}