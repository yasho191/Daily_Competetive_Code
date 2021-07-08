#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        num = num+1;
        int num_arr[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        string roman[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        string ans;
        
        for(int i = sizeof(num_arr)/sizeof(num_arr[0])-1; i >= 0; i--){
            while(num > num_arr[i]){
                num = num - num_arr[i];
                ans += roman[i];
            }
        }
        return ans;
    }
};

int main(){
    Solution obj;
    string roman = obj.intToRoman(200);
    cout<<roman;
}