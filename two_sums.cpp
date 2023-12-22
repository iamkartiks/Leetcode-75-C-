// BRUTE FORCE

#include <iostream>
using namespace std;

int two_sums(int arr[], int sum){
    int i, j;
    int another;
    for(i=0;i<5;i++){
        another = sum - arr[i];
        for(j=i+1;j<5;j++){
            if(another == arr[j]){
                return (i, j);
            }
        }
    }
    return (-1, -1);
}

int main(){
    int arr[5];
    int index1, index2;
    int target = 5;
    for (int i=0;i<5;i++){
        cout << "Enter  " << i+1 << " element :";
        cin >> arr[i];
    }
    index1, index2 = two_sums(arr, target);
    cout << "Index 1 : "<< index1;
    cout << "\nIndex 2 : "<< index2;
}