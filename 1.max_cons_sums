class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0;
        int r = 0;
        int n = nums.size();
        int maxlen = 0;
        while(r<n){
            if(nums[r]==0){
                l = r+1;
            }
            int len = r-l+1;
            maxlen = max(maxlen,len);
            r++;
        }
        return maxlen;
    }
};
