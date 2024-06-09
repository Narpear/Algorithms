#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int left, int right) {
    int i = left;
    int j = right - 1;
    int pivot = arr[right];

    while (i <= j) {
        while (arr[i] < pivot && i < right) {
            i++;
        }
        while (arr[j] > pivot && j > left) {
            j--;
        }

        if (i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    int temp = arr[i];
    arr[i] = arr[right];
    arr[right] = temp;

    return i;
}

void quick_sort(vector<int> &arr, int left, int right){
    if (left>=right){
        return;
    }
    int partition_position = partition(arr, left, right);
    quick_sort(arr, left, partition_position-1);
    quick_sort(arr, partition_position+1, right);
}

int main(){
    vector<int> arr = {3, 7, 1, 9, 5, 0, 2, 8, 4, 1, 5, 8, 2, 5, 2, 3, 7, 8, 4, 3, 6, 4};
    quick_sort(arr, 0, arr.size()-1);
    for (int num: arr){
        cout<<num<<" ";
    }
    return 0;
}