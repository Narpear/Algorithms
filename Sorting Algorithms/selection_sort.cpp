#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {7, 3, 7, 2, 0, 4, 7, 6, 9, 1, 5, 8};
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