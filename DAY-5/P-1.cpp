#include <iostream> 
#include<vector>
using namespace std ;


//You have been given an array/list(ARR) of size N. You need to swap every pair of alternate boundry elements in the array/list. You don't need to print or return anything, just change in the input array itself.
vector<int> altrev ( vector<int> a ) {
    for ( int i=0; i<a.size()/2; i+=2 ) {
        int temp=a[i];
        a[i]=a[a.size()-1-i];
        a[a.size()-1-i]=temp;
    }
    return a;
}


//Reverse the elements of an Array. That is, first element should become last and last should come at first place.
vector<int> rev ( vector<int> a ) {
    for ( int i=0; i<a.size()/2; i++ ) {
        int temp=a[i];
        a[i]=a[a.size()-1-i];
        a[a.size()-1-i]=temp;
    }
    return a;
}


//You have been given an integer value N. Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,7.......8,6,4,2.
vector<int> oddeven ( int a ) {
    vector <int> ans ;
    int i ;
    for ( i=1; i<=a; i+=2 ) {
        ans.push_back(i) ;
    }
    for ( i=a; i>0; i-=2 ) {
        if(i%2!=0) {
            i++;
            continue;
        }
        ans.push_back(i) ;
    }
    return ans;
}


int main() {
    vector <int> a;
    int n ;
    // cout << "Enter the number : " ;
    cin >> n ;
    // for ( int i=0; i<n; i++ ) {
    //     int x;
    //     cin>> x;
    //     a.push_back(x) ;
    // }
    a=oddeven(n) ;
    
    for ( int i=0; i<n; i++ ) {
        cout << a[i] << " " ;
    }



}