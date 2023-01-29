int solve(int a, int b) {
        // code here
        if(a==b) return 0;
        else if((a&b)==b || (a&b)==a) return 1;
        else return 2;
    }
