#include<iostream>

using namespace std;

class Student{};
int main(){
    double a = 100;
    double b = 0;
    try{
        if(b==0){
            throw 400;
        }else if(a==20){
            throw 10;
        }

        if(a==100){
            Student s;
            throw s;
        }

        cout << "a/b = " << a/b << endl;
    }catch(int e){
        // cout << "Value of e: " << e << endl;
        if(e==400){
            cout << "Infinity" << endl;
        }else if(e==10){
            cout << "Not allowed" << endl;
        }
    }catch(Student e){
        cout << "Saved this student from errors" << endl;
    }catch(...){
        cout << "Genereic exception occured" << endl;
    }

    return 0;
}