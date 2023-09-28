#include <iostream>
using namespace std;
void readElement(int no[], int n);

int findsecondMax(int nums[],int n);

int main(){
    int s, result;
    cout << "Enter the size of array : ";
    cin >> s;
    int nos[s];
    readElement(nos, s);
    for(int i = 0; i < s; ++i){
        cout << nos[i] << " "; 
    }
    cout <<endl;
    result = findsecondMax(nos, s-1);  
    cout << "Second Max Element : " << result <<endl;
    return 0;
}

void readElement(int no[], int n){
    cout << "Enter elements : ";
    for (int i = 0; i < n; ++i){
        cin >> no[i];
    }
    for(int i = 0; i < n; ++i){
        cout << no[i] << " "; 
    }
    cout <<endl;
}    



int findsecondMax(int nums[],int n){
    int max = nums[0], second = nums[n];
    

    for(int i = 0; i <= n; i++){
        int tem;
        if(nums[i] > max){
            tem = max;
            max = nums[i];
        }
        if(max > tem && tem > second){
            second = nums[i];
        }
        if(max > nums[i] && nums[i] > second){
            second = nums[i];
        }
    }
    if(max == nums[0] && second == max){
            second = findsecondMax(nums, n-1);
        }
        if( max == second){
            int temp;
            temp = nums[0]; nums[0] = nums[n]; nums[n] = temp;
            second = findsecondMax(nums, n);
        }
    return second;
}
