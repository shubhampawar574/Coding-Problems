int minSteps(string str) {
    // Write your code here.
    int count=1;
    for(int i=1; i<str.size(); i++){
        if(str[i]!=str[i-1]) count++;
    }
    if(count==1) return 1;
    else if(count==2 or count==3) return 2;
    else{
        if(count&1) return 2 + (count-3)/2;
        else return 2 + (count-2)/2;
    }
}
