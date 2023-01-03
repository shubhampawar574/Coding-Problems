class Solution {
  public:
    int removeStudents(int H[], int N) {
        // code here
        //arr will store ascending order which is not always the order required
        //we use it just for calculating max ascending nos. possible
        vector<int> arr;
        int j;
        for(int i=0; i<N; i++){
            j=0;
            while(j<arr.size() && arr[j]<H[i]) j++;
            
            if(j==arr.size()) arr.push_back(H[i]);
            else arr[j]=H[i];
        }
        
        return (N-arr.size());
    }
};
