class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index_vec;
        map<int,int> map_val_to_index;
        
        for(int i=0; i<nums.size(); i++){
            if(map_val_to_index.find(target-nums[i]) != map_val_to_index.end()){
                index_vec.push_back(i);
                index_vec.push_back(map_val_to_index.find(target-nums[i])->second);
                
            }
            map_val_to_index[nums[i]] = i;
        }
        return index_vec;
    }
};
