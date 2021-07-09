class Solution
{
public:
    int romanToInt(string s) 
    {
        int n=s.size(),sum=0,a;
        char ch;
        for(int i=0;i<n;i++)
        {
            ch=s[i];
            a=roman(ch);
            if(a<roman(s[i+1]))
                sum-=a;
            else
                sum+=a;
        }
        return sum;
    }
    int roman(char ch)
    {
        switch(ch)
        {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        };
        return 0;
    }
};