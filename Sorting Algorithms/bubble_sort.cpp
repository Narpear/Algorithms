#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {7, 4, 8, 2, 9, 4, 9, 2, 0, 1, 8, 3, 7};
    int n = arr.size();

    int sorted = 0;
    while (!sorted){
        sorted = 1;
        for(int i = 0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                sorted = 0;
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    for(int num: arr){
        cout<<num<<" ";
    }    
    
    return 0;
}