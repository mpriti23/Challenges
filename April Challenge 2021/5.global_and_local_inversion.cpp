// You are given an integer array nums of length n which represents a permutation of all the integers in the range [0, n - 1].

// The number of global inversions is the number of the different pairs (i, j) where:

// 0 <= i < j < n
// nums[i] > nums[j]
// The number of local inversions is the number of indices i where:

// 0 <= i < n - 1
// nums[i] > nums[i + 1]
// Return true if the number of global inversions is equal to the number of local inversions.



class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int mx=-1;
        if(A.size()<=1){
            return true;
        }
        for(int i=0;i<(A.size()-2);i++){
            mx=max(mx,A[i]);
            if(mx>A[i+2]){
                return false;
            }
        }
        return true;
    }
};
