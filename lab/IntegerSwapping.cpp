#include<iostream>
using namespace std;

int main(){
    int n, rev = 0;
    cout << "Enter a Number : ";
    cin >> n;

    while(n){
        int digit = n%10;
        rev = rev*10 + digit;
        n /= 10;
    }

    cout << "Reverse of an Integer : " << rev << endl;
    return 0;
}