//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k)
    {
        vector<int> res(k);
        unordered_map<int,int> mp;
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            v.push_back({it.first,it.second});
        }
        sort(begin(v),end(v),comp);
        for(int i=0;i<k;i++)
        {
            res[i]=v[i].first;
        }
        return res;
    }
    static bool comp(pair<int,int> &p1,pair<int,int> &p2)
    {
        if(p1.second==p2.second)
        {
            return p1.first>p2.first;
        }
        return p1.second>p2.second;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends