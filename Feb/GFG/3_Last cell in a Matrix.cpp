pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        //code here
        //code here
        int i=0,j=0;
        int chalre=0;
        //0 for right
        //1 for down
        //2 for left
        //3 for up
        pair<int,int> ans;
        while(i>=0 and j>=0 and i<R and j<C){
            ans.first=i;
            ans.second=j;
            if(matrix[i][j]){
                matrix[i][j]=0;
                if(chalre==0){
                    chalre=1;
                    i++;
                }
                else if(chalre==1){
                    chalre=2;
                    j--;
                }
                else if(chalre==2){
                    chalre=3;
                    i--;
                }
                else{
                    chalre=0;
                    j++;
                }
            }
            else{
                if(chalre==0)j++;
                else if(chalre==1)i++;
                else if(chalre==2)j--;
                else i--;
            }
        }
        return ans;
    }
