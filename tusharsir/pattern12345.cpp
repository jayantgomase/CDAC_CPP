// assignment 17

#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i < 6; i++) {
        cout << i;
        if (i == 5) {
            for (int j = 4; j > 0; j--) {
                // cout << j << " ";
            }
            cout <<endl;
        }
    }

    for(int i = 1; i < 6; i++) {
        if (i == 5) {
            // cout << "  ";
            for (int j = 4; j > 0; j--) {
                cout << j;
            }
            cout <<endl;
            break;
        }
        cout << i;
    }

    return 0;
}