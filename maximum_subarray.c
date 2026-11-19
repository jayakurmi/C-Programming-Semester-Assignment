int maxSubArray(int* nums, int numsSize) {
    int max_sum = nums[0];
    int current_sum = nums[0];

    for (int i = 1; i < numsSize; i++) {
        // Either extend the existing subarray or start a new one at nums[i]
        if (current_sum + nums[i] > nums[i]) {
            current_sum = current_sum + nums[i];
        } else {
            current_sum = nums[i];
        }

        // Update the global maximum if the current subarray sum is larger
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}
