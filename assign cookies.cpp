#include <bits/stdc++.h> 
using namespace std;   
class Solution {
  public:
    int maxChildren(vector<int> &greed, vector<int> &cookie) {
        // code here
        sort(greed.begin(),greed.end());
        sort(cookie.begin(),cookie.end());
        int n=greed.size();
        int m=cookie.size();
        
        int l=0;
        int r=0;
        
        while(l<m && r<n)
        {
            if(greed[r]<=cookie[l])
            {
                r++;
            }
            l++;
        }
        return r;
    }
};
int main()
{
    vector<int>greed={1,2,3};
    vector<int>cookie={1,1};
    Solution s;
    cout<<s.maxChildren(greed,cookie);
    return 0;       
}