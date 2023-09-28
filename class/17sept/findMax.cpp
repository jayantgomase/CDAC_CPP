#include <iostream>
using namespace std;
void readElement(int *no, int n);

int findMax(int *nums,int n);

int main(){
    int s;
    cout << "Enter the size of array : ";
    cin >> s;
    int nos[s];
    readElement(nos, s);
    findMax(nos, s);  

    return 0;
}

void readElement(int *no, int n){
    cout << "Enter elements : ";
    for (int i = 0; i < n; ++i){
        cin >> no[i];
    }
    for(int i = 0; i < n; ++i){
        cout << no[i] << " "; 
    }
    cout <<endl;
}    



int findMax(int *nums,int n){
    int max, temp;
    int i = 1;
    do{
        if(nums[i] > nums[i-1]){
            
            max = nums[i];
        }
        else{
            temp = nums[i]; nums[i] = nums[i-1]; nums[i-1] = temp;
            max = nums[i];
        }
        ++i;
    }while(i < n);

    cout << "Max Element : " << max <<endl;
    return 0;
}
