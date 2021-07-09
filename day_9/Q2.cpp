class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string s;
        int c=0;
        int min=999;
        
        for(int i=0;i<strs.size();i++)
        {          
            int l= strs[i].length();
            if(l<min)
            {
                min=l;
                s=strs[i];
            }
        }
        for(int i=0;i<min;i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=s[i])
                {
                    return s.substr(0,c);
                }
            }
            c++;
        }
         return s.substr(0,c);
    } 
};