// Find Missing And Repeating

int *ans = new int[2];
       unordered_map<int,int> frq;
       
       for(int i = 0; i < n; i++)
           frq[arr[i]]++;
           
       for(auto i:frq)
           if(i.second > 1) ans[0] = i.first;
           
       for(int i = 1; i <= n; i++)
           if(frq[i] == 0) ans[1] = i;
           
       return ans;