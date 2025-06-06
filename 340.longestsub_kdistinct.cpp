class Solution {
public:
    int kDistinctChar(string& s, int k) {
        int l = 0;
        int r = 0;
        unordered_map<char,int>mpp;
        int n = s.size();
        int maxlen = 0;
        while(r<n){
            mpp[s[r]]++;
            if(mpp.size()>k){
                mpp[s[l]]--;
                if(mpp[s[l]]==0){
                    mpp.erase(s[l]);
                }
                l++;
            }
        int len = r-l+1;
        maxlen = max(len,maxlen);
        r++;
        }
        return maxlen;
    }
};
