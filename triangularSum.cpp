class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int>temp(n);
        while(n>1){
            int m=n-2;
            for(int i=0;i<=m;i++){
                temp[i]=(nums[i]+nums[i+1])%10;
                nums[i]=temp[i];
            }
            n--;
        }
        return temp[0];
    }
};
