#include<iostream>
using namespace std;

// To find a unique number from an array
/*
    Input:-  11
             5 6 7 5 7 8 8 0 0 3 3
    Output:- 6


    & ->  1 1 => 1, 0 otherwise
    | ->  0 0 => 0, 1 otherwise
    ! -> 0 => 1, 0 otherwise  
    ^ -> 1 1 or 0 0 => 0 and 1 otherwise

    5 5 => 0    0101^0101 => 0
    5 5 6 => 6
*/




int main(){
    int n;
    cin >> n;

    int result = 0;

    while(n--){
        int temp;
        cin >> temp;

        result = result^temp;
    }
    cout << result << endl;
    return 0;
}