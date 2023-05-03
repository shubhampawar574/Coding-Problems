unordered_map<string,int> mm;
for(auto x:arr)mm[x]++;
int odd=0;
for(auto x:mm){
    string temp = x.first;
    reverse(temp.begin(),temp.end());
    if(x.first==temp){
        if(x.second%2)odd++;
        if(odd>1)return false;
    }
    else{
        if(x.second!=mm[temp])return false;
    }
}
return true;
