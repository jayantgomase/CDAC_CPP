#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your choice - \n 1. String \n 2. Integer \n" ;
    cin >> n;

    if(n==1){
        string ch1, ch2;
        cout << "Enter 2 characters. \n";
        cin >> ch1 >> ch2;
        string result;
        result = ch1 + ch2;
        cout << result;
    }
    else{
        int no1, no2, choice;

    do{
        cout << "Enter choice(1, 2, 3, 4) - \n 1. Add \n 2. Subtract \n 3. Divide \n 4. Multiply \n 5. Exit \n";
        cin >> choice;
        cout << "Enter 2 no. \n";
        cin >> no1 >> no2;
        switch(choice){
            case 1 : cout << no1 + no2 << "\n";
                    break;
            case 2 : cout << no1 - no2 << "\n";
                    break;
            case 3 : cout << no1 / no2 << "\n";
                    break;
            case 4 : cout << no1 * no2 << "\n";
                    break; 
        }
    }while(choice != 5);
    }
    return 0;
}