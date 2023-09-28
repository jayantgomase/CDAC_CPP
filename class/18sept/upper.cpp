#include <iostream>
using namespace std;

void ToUpper(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
        }
        i++;
    }
}

int main() {
    char myString[100];
    cout << "enter a string : ";
    cin >> myString;
    
    ToUpper(myString);
    cout << "Uppercase string: " << myString <<endl;
    return 0;
}
