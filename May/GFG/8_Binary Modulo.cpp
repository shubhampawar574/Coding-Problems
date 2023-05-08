int modulo(string s,int m)
{
    //code here
    int ans=0,temp=1;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='1'){
            ans+=temp;
            ans%=m;
        }
        temp*=2;
        temp%=m;
    }
    return ans;
}
