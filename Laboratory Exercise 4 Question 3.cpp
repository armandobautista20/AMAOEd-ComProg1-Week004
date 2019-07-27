#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include "_pause.h"

using namespace std;


int main() {
    // ************************** TO DO **************************
    // 3.	Write a program that accepts user’s name, password and
    // address and display them back using the format “Hi, I am 
    //user’s name. I live at user’s address.”.
    // ***********************************************************
    
    string user = "";
    string password = "";
    string address = "";

    cout << "User's Name" << endl;
    cin >> user;

    cout << "Password" << endl;
    cin >> password;

    cout << "Address" << endl;
    cin >> address;

    cout <<"Hi, I am " << user << ". I live at " << address << "." <<endl;

    system ("pause");
    return 0;
}