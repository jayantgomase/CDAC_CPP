#include <iostream>
using namespace std;

int main(){
    int n, digit, sum = 0, temp;
    cout << "Enter number : ";
    cin >> n;
    temp = n;
    int len = 0;

    while(temp){
        len++; // length of number...
        temp /= 10;
    }
    temp = n;

    while(n>0){
        digit = n%10;
        int power = 1;
        for (int i=0; i<len; i++){
            power *= digit;
        }
        
        sum += power;
        n = n/10;
    } 
    
    // cout << sum << endl;

    if(sum == temp){
        cout << "Armstrong number" << endl;
    }
    else{
        cout << "not a Armstrong number" << endl;
    }
    return 0;
}