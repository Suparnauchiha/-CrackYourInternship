  sort(a,a+n);
       sort(b, b + n, greater<int>());
       for(int i=0;i<n/2;i++){
           if(a[i] + b[i] <k || a[n-1-i] + b[n-1-i] < k ){
               return false;
           }
        }
       return true;
