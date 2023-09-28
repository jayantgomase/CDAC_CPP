#include <iostream>
using namespace std;

int main(){
    // int n1, n2, i, j;
    // cout << "Enter 2 no.";
    // cin >> n1 >> n2;
    
    // for(i = n1; i <= n2; i++){
    //     for(j = 1; j <= i; j++){
    //         if(i % j == 0){
    //             continue;
    //         }
    //         else{
    //             cout << i;
    //         }
    //     }
    // }
    int n;
    cout << "Enter no.";
    cin >> n;
    for(int i = 2; i <= n/2; i++){
        if(n%i != 0){
            cout << "prime no.";
        }
        else{
            cout << "not a prime no.";
        }
    }

    // cin >> n;
    // for(int i=2; i <= n; i++){
    //     if(n%i != 0)
    //     cout << "prime no.";
    //     else{
    //         cout << "not prime";
    //     }
    // }
    return 0;
}