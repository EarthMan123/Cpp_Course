#include<iostream>
using namespace std;

// To count the number of set bits in a array
/*
    constraints: Total number of elements  10^6 
                 0 < n < 100 
    Input:-  10
             2 2 2 2 2 2 2 2 3 3
             0010 0010 0010 0010 0010 0010 0010 0010 0011 0011
    Output:- 12

    & ->  1 1 => 1, 0 otherwise
    | ->  0 0 => 0, 1 otherwise
    ! -> 0 => 1, 0 otherwise  
    ^ -> 1 1 or 0 0 => 0 and 1 otherwise
*/




int main(){
    int n;
    cin >> n;
    int result = 0;

    // Removes the last set bit, So the number of times
    // it removes the set bit becomes the total number of set bits
    while(n>0){
        n = n&(n-1);
        result++;
    }
    cout << result;

    // Inbuilt function to calculate set bits
    cout << __builtin_popcount(n);

    return 0;
}