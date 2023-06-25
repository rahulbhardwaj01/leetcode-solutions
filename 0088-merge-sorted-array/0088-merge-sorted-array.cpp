class Solution {
public:
//     here traversing array from the left as if started from forst data will be lost: bu aat end there  is empty sopace hence from last:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,  j=n-1, k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]< nums2[j]){
                nums1[k--]=nums2[j--];
            }
            else{
                nums1[k--]=nums1[i--];
            }
        }
//         here the nums1 array will be big always::
        while(j>=0){
            nums1[k--]= nums2[j--];
        }
        
        
    }
};

// here we can first add both arrays and then sort them:
// another approach: brute;
// int main()
// {
// 	vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

// 	sort(v.begin(), v.end());

// 	cout << "Sorted \n";
// 	for (auto x : v)
// 		cout << x << " ";

// 	return 0;
// }
