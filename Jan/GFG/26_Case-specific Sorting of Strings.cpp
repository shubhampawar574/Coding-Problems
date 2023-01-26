string caseSort(string str, int nn)
    {
        // your code here

        vector<char> a;
        vector<char> b;
        for(int i=0;i<str.size();i++){
            if(int(str[i])>=97){
                a.push_back(str[i]);
            }
            else{
                b.push_back(str[i]);
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int m=0;
        int n=0;
        for(int i=0;i<str.size();i++){
            if(int(str[i])>=97){
                str[i]=a[m];
                m++;
            }
            else{
                str[i]=b[n];
                n++;
            }
        }
        return str;    
        
    }
