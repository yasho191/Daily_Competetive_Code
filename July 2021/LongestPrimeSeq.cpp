#include<vector>
#include<iostream>

using namespace std;
  
int lcs(vector<int> X, vector<int> Y, int m, int n ) 
{ 
    int L[m + 1][n + 1]; 
    int i, j; 
    for (i = 0; i <= m; i++) 
    { 
        for (j = 0; j <= n; j++) 
        { 
        if (i == 0 || j == 0) 
            L[i][j] = 0; 
      
        else if (X[i - 1] == Y[j - 1]) 
            L[i][j] = L[i - 1][j - 1] + 1; 
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]); 
        } 
    } 
          
    return L[m][n]; 
} 
   
int max(int a, int b) 
{ 
    return (a > b)? a : b; 
} 

bool isPrime(int num){
    if(num < 2)
        return false;
    if(num == 2)
        return true;
    if(num%2 == 0)
        return false;
    
    for(int i = 3; i < num/2; i++){
        if(num%i == 0)
            return false;
    }
    return true;
}
int longestPrimeCommonSubseq(vector<int> arr1, vector<int> arr2)
{
    // Write your code here.
    vector<int> p1, p2;
    
    for(int i = 0; i < arr1.size(); i++){
        bool prime = isPrime(arr1[i]);
        if(prime)
            p1.push_back(arr1[i]);
    }
    
    for(int i = 0; i < arr2.size(); i++){
        bool prime = isPrime(arr2[i]);
        if(prime)
            p2.push_back(arr2[i]);
    }
    
    int max_seq = lcs(p1, p2, p1.size(), p2.size());
    return max_seq;
    
}

	
