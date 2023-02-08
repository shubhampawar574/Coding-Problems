vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      vector<long long int> ans;
      long long int freecell=n*n;
      int count1=0,count2=0;
      vector<int> r(n,0),c(n,0);
      for(int i=0;i<k;i++){
          int row = arr[i][0]-1;
          int col = arr[i][1]-1;
          if(c[col]==0){
              count2++;
              c[col]=1;
              freecell = freecell-n+count1;
          }
          if(r[row]==0){
              count1++;
              r[row]=1;
              freecell = freecell-n+count2;
          }
          ans.push_back(freecell);
      }
      return ans;
  }
