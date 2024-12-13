//Write a program to find mean and median of five number using function 
#include <iostream> 
using namespace std ;

int mean ( int arr[], int n ) {
    if ( n==0 ) 
        return arr[0] ;
    else 
        return arr[n]+mean(arr,n-1) ;
}

int median ( int arr[], int n ) {
    return arr[n/2] ;
}
int main() {
    int arr[5] ;
    for ( int i=0; i<5; i++ ) {
        cin >> arr[i] ;
    }
    cout << mean(arr,5)/5 << endl ;
    cout << median(arr,5) << endl ;
    
}