// assignment 15

#include <iostream>
using namespace std;

int main(){
    int i, j, k;
    for(i = 1; i < 4; i++) {
        for(j = 1; j < 4; j++) {
            for(k = 1; k < 4; k++) {
                if(i!=j && i!=k && j!=k) {
                    cout << i << j << k <<endl;
                }
            }
        }
    }
    return 0;
}
