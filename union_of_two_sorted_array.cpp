//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i=0,j=0;
        vector <int> arr_union;
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                if(arr_union.size()==0 || arr_union.back()!=arr1[i]){
                    arr_union.push_back(arr1[i]);
                }
                i++;
            }
            else{
                if(arr_union.size()==0 || arr_union.back()!=arr2[j]){
                    arr_union.push_back(arr2[j]);
                }
                j++;
            }
        }
        
        while(i<n){
            if(arr_union.size()==0 || arr_union.back()!=arr1[i]){
                    arr_union.push_back(arr1[i]);
                }
                i++;
        }
        while(j<m){
            if(arr_union.size()==0 || arr_union.back()!=arr2[j]){
                    arr_union.push_back(arr2[j]);
                }
                j++;
        }
        
        return arr_union;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
