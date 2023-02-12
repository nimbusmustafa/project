class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
        return true;
        else
        return false;
        
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;vector<string> temp;
        for(int i=0;i<strs.size();i++)
        {
            string x=strs[i];
            for(int j=i+1;j<strs.size();j++)
            {
                string y=strs[j];
                if(isAnagram(x,y))
                {
                    temp.push_back(y);
                    strs.erase(strs.begin()+j);
                }
            }
            temp.push_back(x);
            res.push_back(temp);
            temp.clear();
        }

        return res;
    }

};
