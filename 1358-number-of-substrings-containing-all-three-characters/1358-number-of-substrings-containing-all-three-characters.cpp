class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size(); 
        vector<int> freq(3,0);
        int left = 0;
        int ans = 0;
        for(int i = 0  ; i<n ; i++){
            freq[s[i]-'a']++;
            while(freq[0]&&freq[1]&&freq[2]){
                ans += (n-i);
                freq[s[left]-'a']--;
                left++;
            }
        }
        return ans ;
    }
};