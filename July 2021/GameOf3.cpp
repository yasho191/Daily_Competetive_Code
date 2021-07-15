#include<vector>
using namespace std;

long long int numOfPairs(vector<int> &arr) {
	
    vector<long long int> C;
    C.push_back(0); C.push_back(0); C.push_back(0);
 
    long long int res = 0; 
    
    for (int i=0; i<arr.size(); i++)
        C[arr[i]%3]++;
 
    
    res +=  C[1] * C[2] + C[0] * (C[0] - 1) / 2 + C[0] * (C[0] - 1) * (C[0] - 2) / 6 + C[1] * (C[1] - 1) * (C[1] - 2) / 6 + C[2] * (C[2] - 1) * (C[2] - 2) / 6 + C[0] * C[1] * C[2];
 
    return res;
 
}