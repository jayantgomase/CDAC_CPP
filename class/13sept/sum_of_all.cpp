#include <iostream>
using namespace std;

int main(){
    int n1, n2, i, sum = 0;
    cout << "Enter 2 no.";
    cin >> n1 >> n2;
    i = n1;
    while(i <=n2){
        sum = sum + i;
        i++;
    }
    cout << sum;

    return 0;
}