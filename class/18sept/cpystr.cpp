#include <iostream>
using namespace std;

void StrCpy(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char source[100];
    cout << "enter a string : ";
    cin >> source;
    char destination[100];

    StrCpy(destination, source);

    cout << "Source: " << source <<endl;
    cout << "Destination: " << destination <<endl;

    return 0;
}