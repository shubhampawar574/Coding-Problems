bool isStraightHand(int N, int groupSize, vector<int> &hand) {
    // code here
     map<int,int> mm;
    for(auto x:hand)mm[x]++;
    int num=-1,c=0;
    while(true){
        num=mm.begin()->first;
        c=0;
        while(c<groupSize){
            if(mm[num]==0)return false;
            mm[num]--;
            if(mm[num]==0)mm.erase(num);
            num++;
            c++;
        }
        if(mm.size()==0)break;
    }
    return true;
}
