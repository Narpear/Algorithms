#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int right, int mid){
    
}

void merge_sort(vector<int> &arr; int left; int right){
    if (left>=right)
        return;
    
    int mid = (left+right)/2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid+1, right);

    merge(arr, left, right, mid);

}

int main(){
    vector<int> arr = {4, 7, 2, 9, 2, 0, 1, 7, 3, 8, 0, 4, 2, 6};
    int n = arr.size();

    merge_sort(arr, 0, n-1);
    for (int num: arr){
        cout<<num<<" ";
    }
    
    return 0;
}