#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int right, int mid){
    vector<int> left_copy(arr.begin()+left, arr.begin()+mid+1);
    vector<int> right_copy(arr.begin()+mid+1, arr.begin()+right+1);

    int left_counter = 0, right_counter = 0;
    int sorted_counter = left;

    while(left_counter<left_copy.size() && right_counter<right_copy.size()){
        if (left_copy[left_counter]<=right_copy[right_counter]){
            arr[sorted_counter] = left_copy[left_counter];
            left_counter++;
        }
        else{
            arr[sorted_counter] = right_copy[right_counter];
            right_counter++;
        }
        sorted_counter++;
    }
    while (left_counter<left_copy.size()){
        arr[sorted_counter] = left_copy[left_counter];
        left_counter++;
        sorted_counter++;
    }
    while (right_counter<right_copy.size()){
        arr[sorted_counter] = right_copy[right_counter];
        right_counter++;
        sorted_counter++;
    }
}

void merge_sort(vector<int> &arr, int left, int right){
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