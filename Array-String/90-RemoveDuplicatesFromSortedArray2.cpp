class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 0;
        
        for(int e : nums){ // Goes throut all array reseting the values
            if(i < 2 || e != nums[i - 2]){
                nums[i] = e;
                i++;
            }
        }

        return i;
    }
};