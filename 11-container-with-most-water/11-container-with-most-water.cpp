class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=LONG_LONG_MIN;
        int n=height.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            area=max(area,min(height[i],height[j])*(j-i));
            if(height[i]>height[j])j--;
            else i++;
        }
        return area;
    }
};