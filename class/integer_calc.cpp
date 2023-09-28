#include <iostream>
using namespace std;

int main(){
    int no1, no2, choice;
    
    do{
        cout << "Enter 2 no.";
        cin >> no1 >> no2;
        cout << "Enter choice(1, 2, 3, 4) - \n 1. Add \n 2. Subtract \n 3. Divide \n 4. Multiply \n 5. Exit \n";
        cin >> choice;
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

    return 0;
}