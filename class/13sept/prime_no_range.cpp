#include <iostream>
using namespace std;

int main(){
    int n1, n2, i, j,flag;
    cout << "Enter range.";
    cin >> n1 >> n2;
    
    for(i = n1; i <= n2; i++){
        if(i == 1 || i == 0)
        continue;
        flag = 1;

        for(j = 2; j <= i/2; j++)
        {
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        cout << i<< " ";
    }
    return 0;
}