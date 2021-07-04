#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    vector<int> b(5,10); // 5 times 10 in an array
    vector<int> c(b.begin(),b.end()); // first index and 1 index next to the last index
    vector<int> d{1,2,3,4,5};

    // Pushing elements inside vector
    int n = 5;
    int num;
    for(int i=0;i<n;i++){
        cin >> num;
        v.push_back(num);
    }

    cout << "Size of v vector = " << v.size() << endl;
    cout << "Capacity of v vector = " << v.capacity() << endl;
    cout << "Max Size of v vector = " << v.max_size() << endl;

    cout << "Size of d vector = " << d.size() << endl;
    cout << "Capacity of d vector = " << d.capacity() << endl;
    cout << "Max Size of d vector = " << d.max_size() << endl;

    return 0;
}
