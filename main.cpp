#include <iostream>
#include <string>

using namespace std;


void printName(string);

int main() {
    string name;
    cin >> name;

    printName(name);

    return 0;
}

void printName(string name) {
    cout << name;
}


