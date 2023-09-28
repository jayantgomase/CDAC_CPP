#include <iostream>
using namespace std;

int main(){
    int n, r, digit, count = 0, temp;
    cout << "Enter number \n";
    cin >> n;
    cout << "Enter digit \n";
    cin >> digit;
    temp = n;

    while(n>0){
        r = n%10;
        if(r == digit){
            count++;
        }
        n = n/10;
    }
    cout << "count of digit " << digit << " in " << temp << " is = " << count <<endl ;
    
    return 0;
}