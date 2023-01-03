class Solution{
    
	public:
// 	const unsigned int mod = 1000000007;
	
// 	int ncr(int n, int r){
// 	    long long C[r+1]={0};
// 	    C[0]=1;
// 	    for(int i=1; i<=n; i++){
// 	        for(int j=min(i, r); j>0; j--){
// 	            C[j]=(C[j]+C[j-1])%mod;
// 	        }
// 	    }
// 	    return C[r];
// 	}
	
// 	int compute_value(int n)
// 	{
// 	    // Code here
// 	    int ans=2;
// 	    int calc;
// 	    if(n%2==0){
// 	        calc=ncr(n, n/2);
// 	        ans+=((calc%mod)*(calc%mod))%mod;
// 	        for(int i=1; i<(n/2); i++){
// 	            if(i==1) calc=n;
// 	            else{
// 	                calc=((n-i+1)/i)*calc;
//     	            ans+=(2*(calc%mod)*(calc%mod))%mod;
// 	            }
	            
//     	       // ans+=calc;
// 	        }
// 	    }
// 	    else{
// 	        for(int i=1; i<=(n/2); i++){
//     	       if(i==1) calc=n;
// 	            else{
// 	                calc=((n-i+1)/i)*calc;
//     	            ans+=(2*(calc%mod)*(calc%mod))%mod;
// 	            }
// 	        }
// 	    }
	    
// 	    return ans;


    int mod=1e9+7;
    long long inv(long long int i){
        if(i==1) return 1;
        return (mod-((mod/i)*inv(mod%i))%mod+mod)%mod;
    }
    
    int compute_value(int n){
        long long int ans = 1, ncr=1;
        for(int r=1; r<=n; r++){
            ncr=(((ncr*(n+1-r))%mod)*inv(r))%mod;
            ans=(ans+(ncr*ncr)%mod)%mod;
        }
        return ans%mod;
        
    }
     
};
