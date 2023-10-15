#include <iostream>
using namespace std;

int reverse(int a);

int main(){
    int n;
    cout << "Enter number \n";
    cin >> n;

    reverse(n);
    
    return 0;
}

int reverse(int a){
    int r, rev = 0, temp;
    temp = a;
    while(a>0){
        r = a%10;
        rev = (rev*10) + r;
        a = a/10;
    }
    cout << rev;
    return rev;
}
