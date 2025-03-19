///week05-3.cpp
///Leetcode 2206. Divide Array Into Equal Pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501]={};///501大小陣列,補0
        int odd=0;
        for(int i=0;i<nums.size();i++){
            int now =nums[i];
            a[now]++;///now 增加一次
            if(a[now] %2 ==0) odd--;
            else odd++;///多一個奇數
        }
        if(odd==0) return true;
        else return false;
    }
};
