class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int finalPointer not needed, it could be replaced by the nums.size() - 1
        int finalPointer = nums.size() - 1; // Points to the Array's end
        int i = 0;

        while(i < nums.size()){
            if(nums[i] == val){
                nums[i] = nums[finalPointer]; // Puts the array's end element on the I position
                nums.pop_back(); // Remove the last Elemnt
                finalPointer--;
            }else{
                i++;
            }
        }

        return nums.size();
    }
};