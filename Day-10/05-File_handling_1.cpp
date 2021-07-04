#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
    fstream myFile;

    // Modes
    // 1.) Read -> ios::in
    // 2.) Write -> ios::out
    // 3.) Append -> ios::app
    

    // myFile.open("satyam.txt",ios::out); // write
    // if(myFile.is_open()){
    //     myFile << "Hello\n";
    //     myFile << "How are you doing?\n";
    //     myFile.close();
    // }else{
    //     cout << "Error in opening the file" << endl;
    // }

    // myFile.open("satyam.txt",ios::app); // Append
    // if(myFile.is_open()){
    //     myFile << "Hi";
    //     myFile.close();
    // }else{
    //     cout << "Error in opening the file" << endl;
    // }

    myFile.open("satyam.txt", ios::in);  // Read mode
    if(myFile.is_open()){
        string line;
        while(getline(myFile,line)){
            cout << line << endl;
        }

        myFile.close();

    }else{
        cout << "Some error occured" << endl;
    }


    return 0;
}