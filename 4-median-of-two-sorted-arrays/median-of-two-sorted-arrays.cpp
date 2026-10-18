class Solution {
public:
    vector<int> mergeTwoSortedArray(vector<int>& nums1, vector<int>& nums2){
        int i=0,j=0,k=0;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans(n+m);

        while(i < n && j < m){
            if(nums1[i] < nums2[j]){
                ans[k++] = nums1[i++];
            }
            else{
                ans[k++] = nums2[j++];
            }
        }

        while(i < n){
            ans[k++] = nums1[i++];
        }
        while(j < m){
            ans[k++] = nums2[j++];
        }
        return ans;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged = mergeTwoSortedArray(nums1,nums2);
        int n = merged.size();

        if(n % 2 == 1) return merged[n/2];
        else return ((double)merged[n/2 - 1] + merged[n/2]) / 2.0;
    }
};