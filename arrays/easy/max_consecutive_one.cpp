class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        // arr[]= [1,0,1,1,1]
        int n = arr.size();
        int count = 0;
        int maxL=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==1)
            {
                count++;
                maxL++;
            }
            else
            {
                count = 0;
            }
            maxL=max(maxL,count);
        }
        return maxL;
    }
};