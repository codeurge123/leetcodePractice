class Solution {
public:
    void merge(vector<int>& arr, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;

        // Create temp arrays
        int L[n1], R[n2];

        // Copy data to temp arrays
        for (int i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];

        // Merge the temp arrays back into arr[l..r]
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k++] = L[i++];
            } else {
                arr[k++] = R[j++];
            }
        }

        // Copy the remaining elements of L[], if any
        while (i < n1) {
            arr[k++] = L[i++];
        }

        // Copy the remaining elements of R[], if any
        while (j < n2) {
            arr[k++] = R[j++];
        }
    }

    void mergeSort(vector<int>& arr, int l, int r) {
        if (l >= r) {
            return; // returns recursively
        }
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }

    vector<int> sortArray(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        mergeSort(nums,l,r);
        return nums;
    }
};