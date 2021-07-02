#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        void feeding(){
            cout << "Eat Food" << endl;
        }
        void speak(){
            cout << "Make a sound" << endl;
        }
};

class Dog : public Animal{
    public:
        void speak(){
            // Animal::speak();
            cout << "Woof Woof!!" << endl;
        }
        void do_trick(){
            cout << "Sit" << endl;
        }
};

class Oliver: public Dog{};

int main(){
    Oliver d;
    d.speak();
    d.feeding();
    d.do_trick();

    return 0;
}