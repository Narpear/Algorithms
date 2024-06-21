#include <iostream>
#include <vector>
using namespace std;

int interpolation_search(vector<int> &nums, int target){
    int left = 0;
    int right = nums.size()-1;
    while (left<=right && target>=nums[left] && target<=nums[right]){
        int probe = left + (right-left)*(target-nums[left])/(nums[right]-nums[left]);
        if (nums[probe]>target){
            right = probe-1;
        }
        else if(nums[probe]<target){
            left = probe+1;
        }
        else{
            if (nums[probe]==target){
                return probe;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1, 4, 7, 8, 10, 12};
    cout<<interpolation_search(nums, 7)<<"\n";
    cout<<interpolation_search(nums, 15)<<"\n";
    return 0;
}