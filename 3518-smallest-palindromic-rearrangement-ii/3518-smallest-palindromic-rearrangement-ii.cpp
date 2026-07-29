class Solution {
public:
    static const long long LIMIT = 1000001;

    long long nCr(int n, int r) {
        if (r > n) return 0;
        r = min(r, n - r);

        long long ans = 1;
        for (int i = 1; i <= r; i++) {
            ans = ans * (n - i + 1) / i;
            if (ans >= LIMIT) return LIMIT;
        }
        return ans;
    }


    long long  count(vector<int>&freq){
        int total = 0 ;
        for(auto it : freq){
            total +=it;
        }
        long long ans = 1;
        int rem = total;
        for(int x : freq){
            if(x ==0) continue;
            ans *= nCr(rem , x);
            if(ans >= LIMIT){
                ans = LIMIT;
            }
            rem -=x;
        }
        return ans;

    }
    string smallestPalindrome(string s, int k) {
        vector<int> freq(26,0) ;
        for(char c : s){
            freq[c-'a']++ ;
        }
        string temp ;
        string p ;
        for(int i = 0 ; i<26 ; i++){
            int t = freq[i];
            if (t%2==1){
                p += ('a'+i) ;
            }
            freq[i]/=2 ;
        }
        int n = s.length()/2 ;
        string ans ;
        if (count(freq) < k) return "";
        while(temp.length()<n){
            for(int i =0 ; i<26 ; i++){
                if(freq[i]==0) continue ;
                freq[i]--;
                long long j = count(freq);
                if(j>=k){
                    temp+=('a'+i);
                    break ;
                }
                freq[i]++;
                k-=j; 
            }
        }
        ans += temp+p ;
        reverse(temp.begin(), temp.end()) ;
        ans += temp ;
        return ans ;   
    }
};