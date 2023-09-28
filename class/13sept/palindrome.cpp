#include <iostream>
using namespace std;

int main(){
    int n, r, reverse = 0, temp;
    cout << "Enter number \n";
    cin >> n;
    temp = n;

    while(n>0){
        r = n%10;
        reverse = (reverse*10) + r;
        n = n/10;
    }
    
    if(temp == reverse){
        cout << "palindrome";
    }
    else{
        cout << "not a palindrome";
    }
    return 0;
}