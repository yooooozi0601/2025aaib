class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int now=nums[i];//處理nums[i]
            int digits =0;//有幾位數
            while(now>0){
                digits++;//剝皮
                now =now/10;

            }
            if(digits%2==0) ans++;
        }
        return ans;

    }
};
