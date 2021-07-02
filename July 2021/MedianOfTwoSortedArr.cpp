//Time Complexity O(n)
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size() + nums2.size();
        bool flag = false;
        
        if (size%2 == 0)
            flag = true;
        
        vector<double> sorted;
        int i = 0;
        int j = 0;

        // Merge Sort Logic (2 Pointer)
        // iterate only size/2 + 1
        while(i<nums1.size() && j <nums2.size() && (i+j)<(size/2 + 1)){
            if(nums1[i] < nums2[j]){
                sorted.push_back(nums1[i]);
                i++;
            }   
            else{
                sorted.push_back(nums2[j]);
                j++;
            }
            
        }
        
        while(i < nums1.size() && (i+j)<(size/2 + 1)){
            sorted.push_back(nums1[i]);
            i++;
        }
        
        while(j < nums2.size() && (i+j)<(size/2 + 1)){
            sorted.push_back(nums2[j]);
            j++;
        }
        
        if(flag==true)
            return (sorted[size / 2 - 1] + sorted[size / 2]) / 2;
        
        else
            return sorted[size / 2];
        
    }
};

int main(){
    Solution obj;
    vector<int> v1, v2;
    int n1, n2;
    int input;
    cin>>n1;
    while(n1 > 0){
        cin>>input;
        v1.push_back(input);
        n1--;
    }
    cin>>n2;
    while(n2 > 0){
        cin>>input;
        v2.push_back(input);
        n2--;
    }
    double median = obj.findMedianSortedArrays(v1, v2);
    cout<<median;
}
