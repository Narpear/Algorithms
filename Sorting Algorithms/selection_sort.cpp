#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {9,1,8,2,3,2,7,0};
    int n = arr.size();
    for(int i = 0; i<n-1; i++){
        int min_index = i;
        for(int j = i+1; j<n; j++){
            if (arr[j]<arr[min_index]) min_index = j;
        }
        if (i!=min_index){
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }        
    }
    for (int num: arr){
        cout<<num<<", ";
    }
    return 0;
}