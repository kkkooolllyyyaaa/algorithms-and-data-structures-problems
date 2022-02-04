class Solution {
public:
    char get_lower_case(char c){
        if(c>='a' && c<='z')
            return c;
        else
            return c-'A'+'a';
    }
public:
    char get_upper_case(char c){
        if(c>='A' && c<='Z')
            return c;
        else
            return c-'a'+'A';
    }
public:
    string get_binary(int a){
        string ret;
        while(a>0){
            ret.push_back(a%2+'0');
            a/=2;
        }
        return ret;
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        vector<int>indexes;
        for(int i=0;i<s.length();++i){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
                indexes.push_back(i);
        }
        
        for(int i=0;i<(int)pow(2,indexes.size());++i){
            string mask = get_binary(i);
            while(mask.length()<indexes.size())
                mask.push_back('0');
            for(int c=0;c<mask.length();++c){
                if(mask[c]=='0')
                    s[indexes[c]] = get_lower_case(s[indexes[c]]);
                else
                    s[indexes[c]] = get_upper_case(s[indexes[c]]);
            }
            ans.push_back(s);
        }
        return ans;
    }
};


