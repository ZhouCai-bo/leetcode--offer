class Solution {
public:
	int search(vector<int>& nums, int target) {
		int left = 0, right = nums.size(), cnt = 0;
		while (left < right)
		{
			int mid = left + (right - left) / 2;
			if (nums[mid] >= target)
				right = mid;
			else if (nums[mid] < target)
				left = mid + 1;
		}
		for (; left < nums.size(); left++)
			if (nums[left] == target) cnt++;
		return cnt;
	}
};
