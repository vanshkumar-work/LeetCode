class Solution {
public:

    string sortVowels(string s) {
        vector<pair<char,int>> mp ={
            {'a',0},
            {'e',0},
            {'i',0},
            {'o',0},
            {'u',0}
        };
        int i = 0 ;
        vector<int> first(5, INT_MAX);
        for(char ch : s){
            if(ch=='a'){
                mp[0].second++;
                first[0] = min(first[0],i);
            }
            else if(ch=='e'){
                mp[1].second++;
                first[1] = min(first[1],i);
            }
            else if(ch=='i'){
                mp[2].second++;
                first[2] = min(first[2],i);
            }
            else if(ch=='o'){
                mp[3].second++ ;
                first[3] = min(first[3],i);
            }
            else if(ch=='u'){
                mp[4].second++ ;
                first[4] = min(first[4],i);
            }
            i++ ;
        }
        sort(mp.begin(), mp.end(), [&](auto &p1, auto &p2){

            if (p1.second != p2.second)
                return p1.second > p2.second;
        
            int idx1, idx2;

            if (p1.first == 'a') idx1 = 0;
            else if (p1.first == 'e') idx1 = 1;
            else if (p1.first == 'i') idx1 = 2;
            else if (p1.first == 'o') idx1 = 3;
            else idx1 = 4;

            if (p2.first == 'a') idx2 = 0;
            else if (p2.first == 'e') idx2 = 1;
            else if (p2.first == 'i') idx2 = 2;
            else if (p2.first == 'o') idx2 = 3;
            else idx2 = 4;

            return first[idx1] < first[idx2];
        });

        string ans ;
        for(int i = 0 ; i<s.length() ; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                if(mp[0].second!=0){
                     ans+=mp[0].first ;
                     mp[0].second-- ;
                     }
                else if(mp[1].second!=0){
                     ans+=mp[1].first ;
                     mp[1].second-- ;
                     }
                else if(mp[2].second!=0){
                     ans+=mp[2].first ;
                     mp[2].second-- ;
                     }
                else if(mp[3].second!=0){
                     ans+=mp[3].first ;
                     mp[3].second-- ;
                     }
                else if(mp[4].second!=0){
                     ans+=mp[4].first ;
                     mp[4].second-- ;
                     }

                
                
            }
            else{
                ans+=s[i];
            }
            
        }
        return ans;
    }
};