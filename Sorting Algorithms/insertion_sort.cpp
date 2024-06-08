#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr =  {3, 1, 5, 2, 8 ,6 ,7, 8, 0, 9};
    int n = arr.size();
    for (int i = 1; i<n; i++){
        int temp = arr[i];
        int j = i;
        while(j>0 && arr[j-1]>temp){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = temp;
    }
    for(int x: arr){
        cout<<x<<", ";
    }
    return 0;
}