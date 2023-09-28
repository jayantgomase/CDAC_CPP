#include <iostream>
using namespace std;
void readElement(int *no, int n);

int findsecondSmallest(int *nums,int n);

int main(){
    int s, result;
    cout << "Enter the size of array : ";
    cin >> s;
    int nos[s];
    readElement(nos, s);  
    result = findsecondSmallest(nos, s-1);

cout << "Second Smallest Element : " << result <<endl;

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



int findsecondSmallest(int *nums,int n){
    int min = nums[0], second = nums[n];
    

    for(int i = 0; i <= n; i++){
        int tem;
        if(nums[i] < min){
            min = nums[i];
        }
        if(min > tem && tem > second){
            second = nums[i];
        }
        if(min < nums[i] && nums[i] < second){
            second = nums[i];
        }
    }
    if(min == nums[0] && second == min){
            second = findsecondSmallest(nums, n-1);
        }
        if( min == second){
            int temp;
            temp = nums[0]; nums[0] = nums[n]; nums[n] = temp;
            second = findsecondSmallest(nums, n);
        }
    return second;
}
