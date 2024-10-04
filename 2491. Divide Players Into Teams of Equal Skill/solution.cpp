class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        sort(skill.begin(),skill.end());
        int i=0,j=n-1;
        int prev=skill[i]+skill[j];
        long long chemistrySum=skill[i]*skill[j];
        i++;
        j--;
        while(i<j){
            int curr=skill[i]+skill[j];
            if(curr!=prev){
                return -1;
            }else{
                prev=curr;
                chemistrySum+=(skill[i]*skill[j]);
            }
            i++;
            j--;
        }
        return chemistrySum;
    }
};