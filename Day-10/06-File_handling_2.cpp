#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        string name;
        int age;
        Student(){}
        Student(string name,int age){
            this->name = name;
            this->age = age;
        }
        void display(){
            cout << "Name: " << name << " Age: " << age << endl;
        }
};


int main(){
    Student s("Satyam", 24);

    fstream f("student.bat",ios::out|ios::binary);
    if(!f){
        cout << "Some error occured" << endl;
    }else{
        f.write((char *)&s, sizeof(Student));
        f.close();
    }

    Student r;

    fstream i("student.bat",ios::in|ios::binary);
    if(!i){
        cout << "Some error occured" << endl;
    }else{
        i.read((char *)&r, sizeof(Student));
        i.close();
    }



    if(f.good()){
        cout << "File written successfully" << endl;
        r.display();
    }else{
        cout << "Error occured" << endl;
    }


    

    return 0;
}