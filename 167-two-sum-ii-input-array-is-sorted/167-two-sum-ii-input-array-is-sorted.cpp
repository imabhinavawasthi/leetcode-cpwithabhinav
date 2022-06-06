class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i=0,j=n-1;
        vector<int>ans;
        while(i<j){
            int curr_sum=numbers[i]+numbers[j];
            if(curr_sum==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(curr_sum>target){
                j--;
            }
            else if(curr_sum<target){
                i++;
            }
        }
        return ans;
    }
};