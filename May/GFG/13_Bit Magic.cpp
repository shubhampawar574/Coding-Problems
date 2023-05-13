int bitMagic(int n, vector<int> &arr) {
    // code here
    int ans=0,i=0,j=n-1;
    while(i<j){
        if(arr[i]!=arr[j])ans++;
        i++;
        j--;
    }
    return ans/2 + ans%2;
}
