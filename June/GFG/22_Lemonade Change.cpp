bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int den5=0,den10=0;
        bool res=true;
        for(int i=0;i<N;i++){
            if(bills[i]==5){
                den5++;
            }
            else if(bills[i]==10){
                den10++;
                den5--;
                if(den5<0){
                    res=false;
                    break;
                }
            }
            else{
                if(den10>0 and den5>0){
                    den10--;
                    den5--;
                }
                else{
                    den5-=3;
                    if(den5<0){
                        res=false;
                        break;
                    }
                }
            }
            
        }
        return res;
    }
