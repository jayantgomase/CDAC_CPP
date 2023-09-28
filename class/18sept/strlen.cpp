#include <iostream>
using namespace std;

int Strlen(char s[]) {
    int len = 0;  

    while (s[len] != '\0') {
        len++;
    }

    return len;
}

int main() {
    char myString[100];
    cout << "Enter a string : ";
    cin >> myString;
    int length = Strlen(myString);
    cout << "Length of the string : " << length <<endl;
    return 0;
}