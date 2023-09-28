#include <iostream>
using namespace std;

int main(){
    int n, r, product = 1, temp;
    cout << "Enter number : ";
    cin >> n;
    temp = n;

    while(n>0){
        r = n%10;
        product = product * r;
        n = n/10;
    }
    cout << "product : "<< product << endl;
    
    return 0;
} 