class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
                int n = nums.size();
        vector<int>pos;
        vector<int>neg;

        for(int i=0;i<n;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
            int cnt=0;
        for(int i=0;i<n;i=i+2){
            nums[i]=pos[cnt];
            nums[i+1]=neg[cnt];
            cnt++;
        }
        return nums;
    }
};
T.C-O(n+n/2)
S.C-O(n)

optimal approach

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
               int n=nums.size();
               int pos=0,neg=1;
                vector<int>ans(n,-1);
               for(int i =0;i<n;i++){
                   if(nums[i]<0){
                       ans[neg]=nums[i];
                       neg+=2;
                   }
                   else{
                       ans[pos]=nums[i];
                       pos+=2;
                   }
               }
               return ans;
    }
};
