#include <iostream>
using namespace std;

int main(){
    
    int no1, no2;
    char choice;
    bool loop = true;

    while(loop){
        cout << "Enter choice(+, -, /, *) - \n +. Add \n -. Subtract \n /. Divide \n *. Multiply \n Anything else to Exit \n";
        cin >> choice;
        cout << "Enter 2 Number \n";
        cin >> no1 >> no2;
        
        switch(choice){
            case '+' : cout << no1 + no2 << "\n";
                    break;
            case '-' : cout << no1 - no2 << "\n";
                    break;
            case '/' : cout << no1 / no2 << "\n";
                    break;
            case '*' : cout << no1 * no2 << "\n";
                    break; 
            default : loop = false;
        }
    }

    return 0;
}