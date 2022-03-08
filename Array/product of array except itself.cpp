class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n= nums.size();
        vector<int>out;
        
        int product=1;
        
        if(n<1)
            return out;
        
        for(int i=0;i<n;i++)
        {
            product = product*nums[i];
            out.push_back(product);
        }
        
        product =1;
        
        for(int i=n-1;i>0;i--)
        {
            out[i] = out[i-1]*product;
            
            product = nums[i]*product;
        }
        
        out[0] = product;
        
        return out;
        
    }
};
