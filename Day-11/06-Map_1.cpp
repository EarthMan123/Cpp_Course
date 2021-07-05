#include<iostream>
#include<map>
#include<string>

using namespace std;

void print(map<string, int> &m){
    cout << "Size of map m is: " << m.size() << endl;
    map<string, int> :: iterator it;
    for(it=m.begin(); it != m.end();it++){
        cout << (*it).first << " " << it->second << endl;
    }
}   

int main(){
    // Declaring map object using map stl container
    // Red black trees are used under the hood
    map<string,int> m;
    m["abc"] = 1;
    m["zxc"] = 2;
    m["dfk"] = 3;
    m.insert({"def",4}); // (log n)

    
    
    
    
    auto it = m.find("abc");  // m["abc"]
    if(it == m.end()){
        m["abcd"] = 200;
    }else{
        // m["abc"] = m["abc"]+10;

        m.erase(it); // O(log(n))
        cout << it->first << " " << it->second << endl;
    }

    // cout << m["skf"] << endl;
    print(m);
}
