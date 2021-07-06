#include<iostream>
#define ll long long
using namespace std;

// To find a power b in log n time
/*
    Input:-  2 3
    Output:- 8

    & ->  1 1 => 1, 0 otherwise
    | ->  0 0 => 0, 1 otherwise
    ! -> 0 => 1, 0 otherwise  
    ^ -> 1 1 or 0 0 => 0 and 1 otherwise


    2^3 = 8(^ represents power here)
          0011
          2*2^0 + 2* 2^1
    2^4 = 16
    4 = 0100
        2^0*0 + 
        2^1*0 + 
        2^2*1 + 
        2^3*0
        

Step 1: Check if any bit is set

Step 2: Check if last bit is set

Step3: Right shift by 1


2 power 3

0011&0001 =>  ans = 2,  p = p*p = 2*2 = 4,p=4

0001&0001 => ans = ans*p => 2*4 = 8, p = 4*4 = 16

0000
0001


*/

ll fastExpo(ll a, ll b){
    ll p = a, ans = 1;

    while(b>0){
        if(b&1){
            ans *= p;
        }
        p *= p;
        b = b>>1; 
    }
    return ans;

}

int main(){
    ll a,b;
    cin >> a >> b;

    cout << fastExpo(a,b);
    return 0;
}