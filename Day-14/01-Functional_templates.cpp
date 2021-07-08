#include<iostream>
using namespace std;

template <class T>
void display(T a){
    cout << a << endl;
}



// void display(double a){
//     cout << a << endl;
// }


int main(){

    display<int>(10);
    display<double>(12.36);
    display<string>("Hello everyone");
    return 0;
}