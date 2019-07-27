#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {
    // ************************** TO DO **************************
    // 1.   Write a program that accepts user’s section, and display 
    // them back with the format “*** Section: user’s section ***”.
    // ***********************************************************

    string user="";

    cout << "Enter Section" << endl;
    cin >> user;

    cout <<"***Section: " << user <<"***" << endl;

    system ("pause");
    return 0;
}