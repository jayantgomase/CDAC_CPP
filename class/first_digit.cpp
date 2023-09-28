#include <iostream>
using namespace std;

int main(){
    int n, r, temp;
    cout << "Enter number \n";
    cin >> n;
    temp = n;

    while(n>0){
        r = n%10;
        temp = r;
        n = n/10;
    }
    cout << temp;
    
    return 0;
}