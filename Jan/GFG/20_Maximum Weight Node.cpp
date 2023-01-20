int maxWeightCell(int N, vector<int> Edge)
  {
      // code here
      unordered_map<int, int> mp;
      for(int i=0; i<N; i++){
          if(Edge[i]!=-1){
              mp[Edge[i]]+=i;
          }
      }
      
      int fir=0, sec=0;
      for(auto i: mp){
          if(i.second>sec){
              sec=i.second;
              fir=i.first;
          } 
          else if(i.second==sec){
              if(i.first>fir) fir=i.first;
          }
      }
      return fir;
  }
