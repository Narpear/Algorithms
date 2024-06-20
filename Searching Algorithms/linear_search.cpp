#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int> &nums, int target){
    int index = -1;
    int n = nums.size();

    for(int i = 0; i<n; i++){
        // cout<<nums[i]<<" ";
        if (nums[i]==target){
            index = i;
            return index;
        }
    }
    return index;
}

int main(){
    vector<int> nums = {4, 7, 3, 5, 6, 1, 8, 2, 9};
    cout<<linear_search(nums, 5);
    return 0;
}