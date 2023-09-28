#include <iostream>
using namespace std;

int palindrome(int a);

int main(){
    int n;
    cout << "Enter number \n";
    cin >> n;
    palindrome(n);
    return 0;
}

int palindrome(int a){
    int r, reverse = 0, temp;
    temp = a;

    while(a>0){
        r = a%10;
        reverse = (reverse*10) + r;
        a = a/10;
    }
    
    if(temp == reverse){
        cout << "palindrome" <<endl;
    }
    else{
        cout << "not a palindrome" <<endl;;
    }
    return 0;
}