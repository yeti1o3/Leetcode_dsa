class Solution {
public:
    int maximumSwap(int num) {
        vector<int>num_array;
        int orignal_num=num;
        while(num!=0){
            num_array.push_back(num%10);
            num=num/10;
        }
        vector<int>sort_array=num_array;
        reverse(num_array.begin(),num_array.end());
        sort(sort_array.begin(),sort_array.end(),greater<int>());
        int i=0;
        while(i<num_array.size() && num_array[i]==sort_array[i]){
            i++;
        }
        if(num_array.size()==i){
            return orignal_num;
        }
        int j=num_array.size()-1;
        while(j>=0 && num_array[j]!=sort_array[i]){
            j--;
        }
        swap(num_array[i],num_array[j]);
        int result=0;
        for(i=0;i<num_array.size();i++){
            result*=10;
            result+=num_array[i];
        }
        return result;
    }
};