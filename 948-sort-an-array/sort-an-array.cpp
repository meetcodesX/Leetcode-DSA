class Solution {
public:
    vector<int> MergeTwoSortedArrays(vector<int>& left, vector<int>& right) {
        int i = 0, j = 0, k = 0;
        int n = left.size();
        int m = right.size();
        vector<int> mergedArray(n + m);

        while (i < n && j < m) {
            if (left[i] < right[j]) mergedArray[k++] = left[i++];
            else mergedArray[k++] = right[j++];
        }

        while (i < n)
            mergedArray[k++] = left[i++];

        while (j < m)
            mergedArray[k++] = right[j++];

        return mergedArray;
    }

    vector<int> MergeSort(vector<int>& nums, int start, int end) {
        if (start == end) return {nums[start]};

        int mid = start + (end - start) / 2;
        vector<int> left = MergeSort(nums, start, mid);
        vector<int> right = MergeSort(nums, mid + 1, end);

        return MergeTwoSortedArrays(left, right);
    }

    vector<int> sortArray(vector<int>& nums) {
        return MergeSort(nums, 0, nums.size() - 1);
    }
};