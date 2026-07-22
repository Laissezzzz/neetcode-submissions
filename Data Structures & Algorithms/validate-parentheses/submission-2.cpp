class Solution {
public:
    bool isValid(string s) {
        bool sol=true;

        int openRound=0;
        int openSquare=0;
        int openBracket=0;

        int closeRound=0;
        int closeSquare=0;
        int closeBracket=0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                if(s[i+1]==']' || s[i+1]=='}'){
                    return false;
                }
                openRound++;
            }else if(s[i]=='['){
                if(s[i+1]==')' || s[i+1]=='}'){
                    return false;
                }
                openSquare++;                
            }else if(s[i]=='{'){
                if(s[i+1]==']' || s[i+1]==')'){
                    return false;
                }
                openBracket++;                
            }else if(s[i]==')'){
                closeRound++;  
                if(openRound-closeRound<0){
                    return false;
                }             
            }else if(s[i]==']'){
                closeSquare++; 
                if(openSquare-closeSquare<0){
                    return false;
                }             
            }else if(s[i]=='}'){
                closeBracket++; 
                if(openBracket-closeBracket<0){
                    return false;
                }            
            }
        }

        if(openRound != closeRound || openSquare != closeSquare || openBracket != closeBracket){
            return false;
        }

        return sol;
    }
};
