class Solution
{
public:
    string addBinary(string a, string b)
    {
        string result;
        int carry=0;
        int i=a.length()-1,j=b.length()-1;
        while(i>=0 || j>=0)
        {
            int s = carry;
            if(i>=0)
                s+=a[i]-'0';
            if(j>=0)
                s+=b[j]-'0';
            result +=to_string(s%2);
            carry =s/2;
            i--;j--;
        }
        if(carry!=0)
            result +=to_string(carry);
        reverse(result.begin(),result.end());
        return result;
    }
};