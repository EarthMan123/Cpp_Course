#include<iostream>

using namespace std;

int main(){
    try{
        int a = 10;

        // Can't allow value of a to be 10
        if(a==10){
            throw "string exception thrown";
        }

        cout << "Value of a is: " << a << endl;
    }catch(int a){
        cout << "Can't assign a to 10" << endl;
    } catch(...){
        cout << "Generic exception occured" << endl;
    }

    return 0;
}