class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int buffer;
        k = k % nums.size();

        // Invert full array
        int l = 0, r = nums.size() - 1;
        while(l < r){
            buffer = nums[l];
            nums[l] = nums[r];
            nums[r] = buffer;
            l++;
            r--;
        }

        // Invert array from the beginning to the k element
        l = 0;
        r = k - 1;
        while(l < r){
            buffer = nums[l];
            nums[l] = nums[r];
            nums[r] = buffer;
            l++;
            r--;
        }

        // Invert array from K to the end
        l = k;
        r = nums.size() -1;
        while(l < r){
            buffer = nums[l];
            nums[l] = nums[r];
            nums[r] = buffer;
            l++;
            r--;
        }

    }
};