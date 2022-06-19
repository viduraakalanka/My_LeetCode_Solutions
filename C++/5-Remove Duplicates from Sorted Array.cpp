    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for ( ; i<nums.size()-1;){
            if (nums[i]==nums[i+1]){
                vector<int>::iterator it = nums.begin()+i;
                nums.erase(it+1);
            }else{
                i++;
            }
        }
        
        return i+1;
    }
