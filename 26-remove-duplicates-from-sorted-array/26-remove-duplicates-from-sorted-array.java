class Solution {
    public int removeDuplicates(int[] nums) {
        int arr = 0;
        for (int i = 0; i < nums.length; i++) {
            if (i < nums.length - 1 && nums[i] == nums[i + 1]) {
                continue;
            }
            nums[arr] = nums[i];
            arr++;
        }
        return arr;
    }
}