int maxLength(vector<int> &arr,int n){
   //code here
   //code here
   int ans=0,c=0,negative=-1,start=0;
   for(int i=0;i<n;i++){
       if(arr[i]==0){
           start=i+1;
           c=0;
           negative=-1;
       }
       else if(arr[i]<0){
           c++;
           if(negative==-1)negative=i;
       }
       if(c%2){
           ans = max({ans,negative-start,i-negative});
       }
       else{
           ans=max(ans,i-start+1);
       }
   }
   return ans;
}
