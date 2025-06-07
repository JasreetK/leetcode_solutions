class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int>left(n,1);

        for(int i  = 1; i < n; i++){
            if(ratings[i]>ratings[i-1]){
                left[i] = left[i-1] + 1;
            }
        }

        int cur = 1;
        int right = 1; //not an array
        int sum = max(1,left[n-1]);

        for(int i = n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                cur = right + 1;
            }
            else{
                cur = 1; //minimum possible value that can be assigned
            }

            sum = sum + max(cur,left[i]); 
        }
        return sum;
    }
};
