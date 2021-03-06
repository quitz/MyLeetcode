class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> p(nums.size(),1), a(p),res(p);
        for(int i=1;i<nums.size();i++)
            p[i] = p[i-1] * nums[i-1];
        for(int i=nums.size()-2;i>=0;i--)
            a[i] = a[i+1]*nums[i+1];
        
        for(int i=0;i<nums.size();i++)
            res[i] = p[i] * a[i];
            
        return res;
    }
    
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),1);
        for(int i=1;i<nums.size();i++)
            res[i] = res[i-1] * nums[i-1];
       
        int r=1;
        for(int i=0;i<nums.size();i++){
            res[nums.size()-1-i] *= r;
            r *= nums[nums.size()-1-i];
        }
            
        return res;
    }
};