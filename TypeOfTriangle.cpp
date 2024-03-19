// LEETCODE
class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(begin(nums),end(nums));
        if(nums[0] + nums[1] > nums[2]){
            if(nums[0] == nums[1] && nums[1] == nums[2]) return "equilateral";
            else if(nums[0] == nums[1] || nums[1] == nums[2] || nums[2] == nums[0]){
                return "isosceles";
            }
            else return "scalene";

        }
        else{
            return "none";
        }
    }
};
