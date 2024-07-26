vector<int>v(nums.begin(),nums.end());
       sort(v.begin(),v.end());
       
       unordered_map<int,int>m;
       for(int i=0;i<v.size();i++)
       {
           m[v[i]]=i;
       }
       
       int res=0;
       int i=0;
       while(i<v.size())
       {
           if(m[nums[i]]==i)
           {
               i++;
           }
           else
           {
               swap(nums[i],nums[m[nums[i]]]);
               res++;
           }
       }
       return res;
