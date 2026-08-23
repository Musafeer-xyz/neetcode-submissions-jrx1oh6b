class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;

        while (right>left) 
        {
            int ans = numbers[left] + numbers[right];

            if(ans>target) right--;
            else if (ans<target) left++;
            else return {left+1, right+1};
        }
        return {};
    }
};
