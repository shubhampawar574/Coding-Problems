int minimumNumber(int n,vector<int> &arr){
    // Code here
    int mn = INT_MAX;
    for(int i=0;i<n;i++)mn=min(arr[i],mn);
    int gcd = mn;
    for(int i=0;i<n;i++){
        int a = gcd, b = arr[i];
        while(a>0 && b>0){
            if(a<b)b=b%a;
            else a=a%b;
        }
        if(a==0)gcd=b;
        else gcd=a;
    }
    return gcd;
}
