#include <iostream>
using namespace std;

bool Compare(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return false;
        }
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0') {
        return true; 
    } else {
        return false; 
    }
}

int main() {
    char str1[100], str2[100];
    cout << "enter 1st string : ";
    cin >> str1;
    cout << "enter 2nd string : ";
    cin >> str2;

    bool result1 = Compare(str1, str2);

    cout << "Compare(str1, str2) = " << result1 <<endl;

    return 0;
}
