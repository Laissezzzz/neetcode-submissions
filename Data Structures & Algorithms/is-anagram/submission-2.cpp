class Solution {
public:
    bool isAnagram(string s, string t) {
        bool sol=true;

        if(s.size() != t.size()){
            return false;
        }

        const int alphabetSize=26;

        int alphabetFrequencyOne[alphabetSize]= {};
        int alphabetFrequencyTwo[alphabetSize]= {};

        for(int i=0;i<s.size();i++){
            alphabetFrequencyOne[s[i]-'a']++;
        }

        for(int i=0;i<t.size();i++){
            alphabetFrequencyTwo[t[i]-'a']++;
        }

        for(int i=0;i<alphabetSize;i++){
            if(alphabetFrequencyOne[i] != alphabetFrequencyTwo[i]){
                return false;
            }
        }


        return sol;
    }
};
