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
    int field = a * b, perimeter = 2 * a + 2 * b;
    std::string stars(a, '*'), spaces(a-2, ' '), fieldSpaces, perimeterSpaces, cleanLine, rest;
    if(a > 12) {
        fieldSpaces = std::string(a - 9 - to_string(field).length(), ' ');
        perimeterSpaces = std::string(a - 10 - to_string(perimeter).length(), ' ');
    }
    else {
        fieldSpaces = std::string(a + to_string(field).length(), ' ');
        perimeterSpaces = std::string(a + to_string(perimeter).length(), ' ');
    }
    cleanLine = "*";
    for(int i = 0; i < a - 2; i++) {
        cleanLine += " ";
    }
    cleanLine += "*";
    cout << stars << endl;
    if(fieldSpaces.length() <= stars.length() && perimeterSpaces.length() <= stars.length()) {
        cout << "* pole: " << field << fieldSpaces << "*" << endl;
        cout << "* obwod: " << perimeter << perimeterSpaces << "*" << endl;   
    }
    else {
        cout << cleanLine << " pole: " << field << endl;
        cout << cleanLine << " obwod: " << perimeter << endl;
    }
    rest = "";
    for(int i = 0; i < b - 4; i++) {
        rest += cleanLine + "\n";
    }
    cout << rest;
    cout << stars << endl;
}
