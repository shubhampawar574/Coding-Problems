int solve(int a, int b, int c) {
        // code here
        long long int maxi; char ch;
        if(a>=b && a>=c){
            ch='a';
            maxi=a;
        }
            
        else if(b>=a && b>=c){
            ch='b';
            maxi=b;
        }
        else{
            ch='c';
            maxi=c;
        }
        long long int sum=0;
        if(ch=='a'){
            sum+=b+c;
        }
        else if(ch=='b'){
            sum+=a+c;
        }
        else if(ch=='c'){
            sum+=a+b;
        }
        long long int temp=(maxi%2) ? maxi/2 + 1 : maxi/2;
        // cout<<temp<<endl;
        if(temp-sum > 1) return -1;
        else return a+b+c;
        
    }
