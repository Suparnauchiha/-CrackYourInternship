//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class twoStacks {
    int * arr;
  int size;
  int top1;
  int top2;
  public:

    twoStacks() {
      
      size = 100;
       arr = new int[size];
      top1 = -1;
      top2 = size;
    }

    // Function to push an integer into the stack1.
    void push1(int data) {
        // code here
         if (top1 < top2 - 1) {
      top1++;
      arr[top1] = data;
     
    } 
    }

    // Function to push an integer into the stack2.
    void push2(int data) {
        // code here
         if (top1 < top2 - 1) {
      top2--;
      arr[top2] = data;
     
    }
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        // code here
             if(top1==-1) return -1;
        int ans=arr[top1];
        top1--;
        return ans;
     
    
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
           // code here
        if(top2==size) return -1;
        int ans=arr[top2];
        top2++;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    while (T--) {
        twoStacks *sq = new twoStacks();

        int Q;
        cin >> Q;
        while (Q--) {
            int stack_no;
            cin >> stack_no;
            int QueryType = 0;
            cin >> QueryType;

            if (QueryType == 1) {
                int a;
                cin >> a;
                if (stack_no == 1)
                    sq->push1(a);
                else if (stack_no == 2)
                    sq->push2(a);
            } else if (QueryType == 2) {
                if (stack_no == 1)
                    cout << sq->pop1() << " ";
                else if (stack_no == 2)
                    cout << sq->pop2() << " ";
            }
        }

        cout << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends
