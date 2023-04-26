bool is_possible_to_get_seats(int n, int m, vector<int>& seats){

    if(n>m){
        return false;
    }
    if(seats[0]==0 && seats[1]==0){
        seats[0]=1;;
        n--;
    }

    for(int i=1;i<m-1;i++){
        if(seats[i-1]==0 && seats[i]==0 && seats[i+1]==0){
            seats[i]=1;   
            n--;
        }else{
            continue;
        }
    }

    if(seats[m-1]==0 && seats[m-2]==0){
      n--;  
    } 

    if(n<=0){
        return true;    
    }
    return false;
}
