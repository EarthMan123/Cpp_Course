#include<iostream>

using namespace std;

// Rethrowing exceptions
void func(){
    throw 3;
}

void func1(){
    try{
        func();
    }catch(int e){
        cout << "Some error occured " << endl ;
        throw;
    }
}


int main(){
    try{
        func1();
    }catch(...){
        cout << "Error captured in main"<< endl;
    }

    return 0;
}