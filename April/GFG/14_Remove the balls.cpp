int finLength(int N, vector<int> color, vector<int> radius) {
  int n=color.size();
  stack<int> stc, str;

  for(int i=0; i<n; i++){

      if(!stc.empty() && !str.empty() && stc.top()==color[i] && str.top()==radius[i]){
          stc.pop();
          str.pop();

      }
      else{
          stc.push(color[i]);
          str.push(radius[i]);
      }
  }

  return stc.size();
}
