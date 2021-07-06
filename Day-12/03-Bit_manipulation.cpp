#include<iostream>
using namespace std;

// To count the number of set bits in a number
/*
    Input:-  3
    Output:- 2

    Input:-  4
    Output:- 1

    & ->  1 1 => 1, 0 otherwise
    | ->  0 0 => 0, 1 otherwise
    ! -> 0 => 1, 0 otherwise  
    ^ -> 1 1 or 0 0 => 0 and 1 otherwise
*/




int main(){
    int n;
    cin >> n;

    //Method 1 => 32 bit  => 32 times
    int result = 0;
    while(n!=0){
        if(n&1){
            result++;
        }
        n = n>>1;
    }
    cout << result;

    return 0;
}