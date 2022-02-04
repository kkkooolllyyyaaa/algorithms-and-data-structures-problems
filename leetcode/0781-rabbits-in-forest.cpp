class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int ans = 0;
        vector<int>each(1000,0);
        for(int i=0;i<answers.size();++i)
            each[answers[i]]++;
        ans+=each[0];
        for(int i=1;i<1000;++i){
            if(each[i]!=0){
                ans+=((each[i]/(i+1))*(i+1));
                if(each[i]%(i+1)!=0){
                    ans+=(i+1);
                }
            }
        }
        return ans;
    }
};


