class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),m=0;
        int i=0,j=n-1;
        while(i<j)
        {
            int k=(j-i)*min(height[i],height[j]);
            if(m<k)
            m=k;
            height[i]<height[j]?i++:j--;
        }
        return m;
        
    }
};