class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> numberCount;

        // Count how many times each number appears
        for(int i = 0; i < nums.size(); i++){
            numberCount[nums[i]]++;
        }

        pair<int, int> bigger; // Starts a pair of the bigger <number, count>
        bigger.second = 0; // Set the first count to 0

        for(auto& pair : numberCount){ // Compare each number on the map with the bigger number
            if(pair.second > bigger.second){
                bigger = pair;
            }
        }

        return bigger.first;
    }
};