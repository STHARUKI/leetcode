// O(n) Time, O(1) space

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tempSum = 0;
        int totalSum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }
        
        for(int i = 0; i < nums.size(); i++) {
            if(totalSum - nums[i] - tempSum == tempSum) {
                return i;
            }
            tempSum += nums[i];
        }
        return -1;
    }
};