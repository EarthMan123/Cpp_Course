#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    vector<int> b(5,10); // 5 times 10 in an array
    vector<int> c(b.begin(),b.end()); // first index and 1 index next to the last index
    vector<int> d{1,2,3,4,5};

    // pop_back: removes the last element
    d.pop_back();

    // insert elements in the middle of the vector: O(n)
    d.insert(d.begin()+2,3,200);
    
    // erase some elements from the middle of the vector
    d.erase(d.begin()+1,d.begin()+5);


    cout << d.capacity() << endl;

    d.resize(5);

    cout << d.capacity() << endl;

    d.clear();

    cout << d.capacity() << endl;

    if(d.empty()){
        cout << "No elements available in the vector" << endl;
    }else{
        for(int i=0;i<d.size();i++){
            cout << d[i] << " ";
        }
        cout << endl;
    }


    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    

    // Gives the front and last element in the vector
    cout << d.front() << endl;
    cout << d.back() << endl;

    vector<int> e;
    e.reserve(100);


    return 0;
}
