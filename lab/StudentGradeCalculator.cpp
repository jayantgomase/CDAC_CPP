#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of student : ";
    cin >> n;
    for (int i = 0; i < n; i++){
        string name;
        cout<<"Enter name of student "<< i+1 << " : ";
        cin >> name;

        int sub[3];
        char grade[3];

        // take marks as input and set grade
        for (int i=0; i<3; i++){
            cout << "Enter marks for assignment "<< i+1 <<" (out of 100) : ";
            cin >> sub[i];
            // marks check
            if(!(sub[i] > -1 && sub[i] <= 100)){
                cout << "Invalid Marks .. plese try again" << endl;
                i--;
                continue;
            };

            if (sub[i] >= 90){
                grade[i] = 'O';
            }
            else if (sub[i] >= 80){
                grade[i] = 'A';
            }
            else if (sub[i] >= 70){
                grade[i] = 'B';
            }
            else if (sub[i] >= 60){
                grade[i] = 'C';
            }
            else {
                grade[i] = 'F';
            }
        }

        cout << "Name of Student : " << name << endl;
        
        cout << "Score for Assignment 1: " << sub[0] << " Grade : " << grade[0] << endl;
        cout << "Score for Assignment 2: " << sub[1] << " Grade : " << grade[1] << endl;
        cout << "Score for Assignment 3: " << sub[2] << " Grade : " << grade[2] << endl;
        int avg = (sub[0]+sub[1]+sub[2])/3;
        cout << "Average Score of Assignments : " << avg << endl;


        cout << endl << "*****" << endl;

    }


    return 0;
}