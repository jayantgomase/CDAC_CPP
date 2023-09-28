#include <iostream>
using namespace std;

void readElement(int *no, int n);
void printElement(int *no, int n);
bool search(int *nums, int n, int element);

int main(){
    int s, element;
    cout << "Enter the size of array : ";
    cin >> s;
    int nos[s];

    readElement(nos, s);
    printElement(nos, s);

    cout << "Enter the element you wanna search : ";
    cin >> element;
    
    search(nos, s, element);  

    return 0;
}

void readElement(int *no, int n){
    cout << "Enter elements : ";
    for (int i = 0; i < n; ++i){
        cin >> no[i];
    }
}  

void printElement(int *no, int n){
    for(int i = 0; i < n; ++i){
        cout << no[i] << " "; 
    }
    cout <<endl;
} 

bool search(int *nums, int n, int element){
    bool flag = false;
    int i = 0;
    
    
    for(i = 0; i < n; i++){
        if(nums[i] == element){
            flag = true;
            
        }
    }

    if(flag == false){
        cout << "false" <<endl;
    }
    else{
        cout << "true" <<endl;
    }
    
    return flag;
}

        