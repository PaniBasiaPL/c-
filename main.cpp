#include<iostream>
#include<string>

using namespace std;


int a;
int b;

int main() {
    cout << "podaj bok a ";
    cin >> a;
    cout << "podaj bok b ";
    cin >> b;
    int digits = to_string(a*b).length();
    string spaces = "                                ";
    for(int i = 0; i < digits; i++) {
        spaces.erase(spaces.length() - 1);
    }
    spaces += "*";
    cout << "***********************************" << endl << "*" << " " << a * b << spaces << endl << "*                                 *" << endl << "*                                 *" << endl << "*                                 *" << endl << "***********************************";
}