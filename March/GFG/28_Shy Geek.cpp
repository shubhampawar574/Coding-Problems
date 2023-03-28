Shop shop;
    Solution(Shop s)
    {
        this->shop = s;
    }
    long long find(int n, long k){
        // Return the number of chocolates Geek had
        // enjoyed out of 'n' chocolates availabe in the
        // 'shop'.
        long long int cnt = 0;
        int s = 0, e = n, ans;
        while(k){
            ans = -1;
            s = 0;
            while(s < e){
                long mid = (s + e) / 2;
                auto choc = shop.get(mid);
                if(choc==-1) ans=-1;
                if(choc > k){
                    e = mid;
                }
                else{
                    ans = choc;
                    s = mid + 1;
                }
            }
            if(ans == -1){
                break;
            }
            cnt += k / ans ;
            k = k % ans;
        }
        return cnt;
    }
