// Keeping a count of 0's 1's and 2's and updating the original array
//Time complexity - O(2N)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;
        
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]==0)
                count0++;
            if(nums[i]==1)
                count1++;
            if(nums[i]==2)
                count2++;
        }
        
        int i = 0;
        while(count0)
        {
            nums[i] = 0;
            i++;
            count0--;
        }
        while(count1)
        {
            nums[i] = 1;
            i++;
            count1--;
        }
        while(count2)
        {
            nums[i] = 2;
            i++;
            count2--;
        }
    }
};