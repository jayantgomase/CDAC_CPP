#include <iostream>
using namespace std;

void ToLower(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
        i++;
    }
}

int main() {
    char myString[100];
    cout << "enter a string : ";
    cin >> myString;

    ToLower(myString);
    cout << "Lowercase string: " << myString <<endl;
    return 0;
}
