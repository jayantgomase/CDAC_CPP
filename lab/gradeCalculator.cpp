#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter no. of students : ";
    cin >> n;

    if(n <= 0){
        cout << "Invalid Input";
    }
    else{
        for(int i = 1; i <= n; i++){
        string name;
        cout << "Enter name of students : ";
        cin >> name;
        cout <<endl;

        int assign1, assign2, assign3;
        
        do{
            cout << "Enter assignment 1 marks (out of 100) : ";
            cin >> assign1;if(assign1 <= 0){
                cout << "Invalid Input" <<endl;    
            }if(assign1 <= 0){
                cout << "Invalid Input" <<endl;    
            }
            if(assign1 <= 0){
                cout << "Invalid Input" <<endl;    
            }
        }while(assign1 <= 0);
        
        do{
            cout << "Enter assignment 2 marks (out of 100) : ";
            cin >> assign2;
            if(assign2 <= 0){
                cout << "Invalid Input" <<endl;    
            }
        }while(assign2 <= 0);

        do{
            cout << "Enter assignment 3 marks (out of 100) : ";
            cin >> assign3;
            if(assign3 <= 0){
                cout << "Invalid Input" <<endl;    
            }
        }while(assign3 <= 0);

        
        cout << "Name of Student : " << name;
        cout <<endl;
        cout << "Marks in assignment 1 : " << assign1;
        cout <<endl;
        cout << "Marks in assignment 2 : " << assign2;
        cout <<endl;
        cout << "Marks in assignment 3 : " << assign3;
        cout <<endl;

        float avg;
        avg = (assign1 + assign2 + assign3)/3;

        cout << "Average Marks : " << avg;
        cout <<endl;
        
        
        
        if(avg >= 90 && avg <= 100){
            cout << "Grade = A" << endl;
        }
        else if(avg >= 80 && avg <= 89){
            cout << "Grade = B" << endl;
        }
        else if(avg >= 70 && avg <= 79){
            cout << "Grade = C" << endl;
        }
        else if(avg >= 60 && avg <= 69){
            cout << "Grade = D" << endl;
        }
        else if(avg < 60){
            cout << "Grade = F" << endl;
        }
        cout <<endl;
        }
    }
    
    
}