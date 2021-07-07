#include<iostream>
#include<vector>
#include"stdc++.h"
using namespace std;


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int index = -1;
        for (int i = 0; i < nums1.size(); i++){
            vector<int>::iterator index = find(nums2.begin(), nums2.end(), nums1[i]);
            int min = nums1[i];
            while(index != nums2.end()){
                if(min < nums2[index-nums2.begin()]){
                    min = nums2[index-nums2.begin()];
                    break;
                }
                index++;
            }
            if (min != nums1[i])
            arr.push_back(min);
            else
            arr.push_back(-1);
        }
        return arr;
    }
};

int main(){
    vector<int> v1, v2, result;
    int n, m, input;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>input;
        v1.push_back(input);
    }
    cin>>m;
    for(int i = 0; i < m; i++){
        cin>>input;
        v2.push_back(input);
    }
    Solution obj;
    result = obj.nextGreaterElement(v1, v2);
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
}