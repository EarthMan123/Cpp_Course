#include<bits/stdc++.h>

using namespace std;
// Program to find the frequency of all the strings
void print(unordered_map<string, int> &m){
    cout << "Size of map m is: " << m.size() << endl;
    // map<string, int> :: iterator it;
    // for(it=m.begin(); it != m.end();it++){
    //     cout << (*it).first << " " << it->second << endl;
    // }

    for(auto &it : m){
        cout << it.first << " " << it.second << endl;
    }
}   

int main(){
    unordered_map<string,int> m;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        m[s]++;
    }

    print(m);
    return 0;
}