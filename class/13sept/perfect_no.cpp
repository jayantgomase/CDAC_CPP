#include <iostream>
using namespace std;

int main(){
    int n, i, temp, sum = 0;
    cout << "Enter number";
    cin >> n;
    temp = n;

    for(i=1; i<n; i++){
        if(n%i == 0)
        sum = sum + i;
    }

    if(sum == temp){
        cout << "Perfect no.";
    }
    else{
        cout << "not a Perfect no.";
    }    
    return 0;
}