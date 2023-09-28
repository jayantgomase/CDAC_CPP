#include <iostream>
using namespace std;

int main(){
    int n, fact = 1;
    cout << "Enter number : " <<endl;
    cin >> n;
    for(int i = 1; i<= n; i++){
        fact = fact*i;
    }
    cout << fact;
    return 0;
}