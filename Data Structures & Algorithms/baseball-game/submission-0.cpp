class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        vector<int> scores;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                scores.push_back(scores[scores.size()-2]+scores[scores.size()-1]);
            }else if(operations[i]=="D"){
                scores.push_back(scores[scores.size()-1]*2);
            }else if(operations[i]=="C"){
                scores.pop_back();
            }else{
                scores.push_back(stoi(operations[i]));
            }
        }
        for(auto& score: scores){
            sum+=score;
        }
        return sum;
    }
};