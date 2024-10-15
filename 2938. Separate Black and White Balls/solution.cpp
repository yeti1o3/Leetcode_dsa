class Solution {
public:
    long long minimumSteps(string s) {
        int zero=0;
        long long score=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='0'){
                zero++;
            }else{
                score+=zero;
            }
        }
        return score;
        }
};