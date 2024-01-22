class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> err;
        
        for (int i = 0; i < nums.size(); i++) {
            while (nums[i] != i + 1 && nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i + 1) {
                err.push_back(nums[i]);
                err.push_back(i + 1);
                break;
            }
        }
        
        return err;
    }
};

/*class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> err;
        for(int i=0;i<nums.size();i++){
            //int j=nums[i];
            if(nums[i]!=i+1){
                err.push_back(nums[i]);
                nums.pop_back();
                //err.push_back(i+1);
            }
            sort(nums.begin(),nums.end());
            if(nums[i]!=i+1){
                err.push_back(i+1);
            }
        }
        return err;
    }
};*/