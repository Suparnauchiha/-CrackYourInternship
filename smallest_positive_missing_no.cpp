 int missingNumber(int arr[], int n) 
    { 
        std::unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        
        int num=1;
        while(m[num]!=0)
        {
            num++;
        }
        return num;
    } 
