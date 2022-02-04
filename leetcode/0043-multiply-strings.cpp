class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1==0 || num2==0)
            return 0;
        if(num1.length()>num2.length())
            swap(num1,num2);
        int l1 = num1.length(), l2 = num2.length(), carry, max_size = 0;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        vector<string>prods;
        
        for(int i=0;i<l1;++i){
            carry = 0;
            string prod = ;
            for(int j=0;j<l2;++j){
                prod.push_back(((num2[j]-'0')*(num1[i]-'0')+carry)%10+'0');
                carry = ((num2[j]-'0')*(num1[i]-'0')+carry)/10;
            }
            if(carry!=0)
                prod.push_back(carry+'0');
            for(int c = 0; c < i; ++c)
                prod = 0 + prod;
            if(prod.length()>max_size)
                max_size = prod.length();
            prods.push_back(prod);
        }
        string ans = ;
        carry = 0;
        for(int i = 0; i < max_size; ++i){
            int sum = 0;
            for(int j = 0; j < prods.size(); ++j){
                if(prods[j].size()>i){
                    sum += (prods[j][i]-'0');
                }
            }
            ans.push_back((sum+carry)%10+'0');
            carry = (sum+carry)/10;
        }
        if(carry!=0)
            ans.push_back(carry+'0');
        reverse(ans.begin(),ans.end());
        return ans;

    }
};


