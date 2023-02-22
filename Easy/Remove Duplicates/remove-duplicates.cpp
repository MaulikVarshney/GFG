//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    string ans = "";
	    unordered_map<char,int> mp;
	    for(int i = 0; i < S.size(); i++){
	        mp[S[i]]++;
	    }
	    for(int i = 0; i < S.size(); i++){
	        int x = mp[S[i]];
	        if(x == 1) ans += S[i];
	        else if(x > 1){
	            ans += S[i];
	            mp[S[i]] = -1;
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends