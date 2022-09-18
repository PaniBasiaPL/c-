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
    int field = a * b;
    int perimeter = 2 * a + 2 * b;
    std::string stars(a, '*');
    std::string spaces(a - 2, ' ');
    std::string fieldSpaces;
    std::string perimeterSpaces;
    if(a > 12) {
        fieldSpaces = std::string(a - 9 - to_string(field).length(), ' ');
        perimeterSpaces = std::string(a - 10 - to_string(perimeter).length(), ' ');
    }
    else {
        fieldSpaces = std::string(a + to_string(field).length(), ' ');
        perimeterSpaces = std::string(a + to_string(perimeter).length(), ' ');
    }
    std::string cleanLine = "*";
    for(int i = 0; i < a - 2; i++) {
        cleanLine += " ";
    }
    cleanLine += "*";
    cout << fieldSpaces.length() << ";;;" << stars.length() << endl;
    cout << stars << endl;
    if(fieldSpaces.length() <= stars.length()) {
        cout << "* pole: " << field << fieldSpaces << "*" << endl;
    }
    else {
        cout << cleanLine << " pole: " << field << endl;
    }
    if(perimeterSpaces.length() <= stars.length()) {
        cout << "* obwod: " << perimeter << perimeterSpaces << "*" << endl;   
    }
    else {
        cout << cleanLine << " obwod: " << perimeter << endl;
    }
    std::string rest = "";
    for(int i = 0; i < b - 4; i++) {
        rest += cleanLine + "\n";
    }
    cout << rest;
    std::string(a, '*');
    cout << stars << endl;
}
