class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans=0;
        vector<int>arr = {a,b,c};
        sort(arr.begin(),arr.end());
        a = arr[2];
        b = arr[1];
        c = arr[0];
        ans+=c;
        if((a-b)>c){
            a-=c;
        }
        else{
            c-=(a-b);
            a=b;
            a-=c/2;
            b-=(c/2+c%2);
        }
        ans+=b;
        
        return ans;
    }
};


