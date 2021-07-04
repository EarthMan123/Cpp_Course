#include<iostream>  // input output
#include<vector>  // vectors
#include<string> // string functions
#include<algorithm>  // sort function

using namespace std;

// pair
// Hyundai 100
// 100 200
// 200 Hyundai

bool compare(pair<string,int> a, pair<string,int> b){
    // If price is same than sort lexicographically
    if(a.second==b.second){
        return a.first<b.first;
    }
    // else sort by price
    return a.second<b.second;
}


int main(){
    // int x,y;
    // cin >> x >> y;
    // pair<int, int> p;

    // // Ways of creating pairs
    // p = {x,y}; // 1st way

    // p = make_pair(x,y); // 2nd way

    // p.first = x; //3rd way
    // p.second = y;


    // cout << p.first << " " << p.second << endl;
    
    int n;
    cin >> n;
    
    // Vector of pairs(string and integer)
    vector<pair<string ,int>> v;

    for(int i=0;i<n;i++){
        string name; int price;
        cin >> name >> price;

        v.push_back(make_pair(name,price));

    }

    // Sort the vector
    sort(v.begin(),v.end(),compare);

    // Looping over the vector
    for(auto x: v){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}