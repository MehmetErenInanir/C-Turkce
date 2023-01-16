#include <iostream>
#include <string>
#define password "engin"

using namespace std;

int main() {
    string input;
    cout << "Password : ";
    cin >> input;
    if(input == password) {
        cout << "True!";
    } else {
        cout << "False!";
    }
}