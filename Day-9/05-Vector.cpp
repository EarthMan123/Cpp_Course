#include<iostream>

using namespace std;

// Dynamic Arrays are known as vectors
class Vector{
    // Data members
    int *arr;
    int cs;
    int maxSize;
    public:
    Vector(int defaultSize=4){
        maxSize = defaultSize;
        cs = 0;
        // Dynamically allocating memory during run time
        arr = new int[maxSize];
    }

    void push_back(int data){
        if(cs==maxSize){
            // Create a copy for the initial array
            int *oldArr = arr;
            
            // Double the size of current array
            arr = new int[2*maxSize];
            maxSize = 2*maxSize;
            
            // Copy the elements from old array to new array
            for(int i=0;i<cs;i++){
                arr[i] = oldArr[i];
            }

            // Delete the old array
            delete [] oldArr;
        }
        arr[cs] = data;
        cs++;
    }
    
    void print(){
        for(int i=0;i<cs;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    bool empty(){
        return cs==0;
    }

    void pop_back(){
        if(!empty()){
            cs--;
        }
    }

    int getSize(){
        return cs;
    }

    int getMaxSize(){
        return maxSize;
    }

    int& operator[](int i){
        return arr[i];
    }

};

// ostream& operator<<(ostream &os, Vector v){
//     v.print();
//     return os;
// }




int main(){
    Vector v;

    v.push_back(2);
    v.push_back(3);
    // v.print();

    cout << "Element available at index 0 is: " << v[0] << endl;
    v[0] = 56;
    // v.print();
    cout << "Element available at index 0 is: " << v[0] << endl;

    cout << "Size and Max size"<< endl;
    cout << v.getSize() << " " << v.getMaxSize() << endl;

    for(int i=0;i<10;i++){
        v.push_back(i*i);
    }

    cout << v.getSize() << " " << v.getMaxSize() << endl;
    v.print();

    // cout << v;

    return 0;
}