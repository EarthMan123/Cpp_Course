#include<bits/stdc++.h>

using namespace std;
// Program to find the frequency of all the strings
void print(unordered_set<string> &s){
    for(string value: s){
        cout << value << " ";
    }
    cout << endl;
    for(auto it = s.begin(); it != s.end(); it++){
        cout << (*it) << " ";
    }
}   

int main(){
    unordered_set<string> s; 
    s.insert("abc"); // O(Log(n))
    s.insert("cde");
    s.insert("abc");
    s.insert("bcd");
    auto it = s.find("abc");
    if(it != s.end()){
        s.erase(it);
    }
    print(s);
    return 0;
}