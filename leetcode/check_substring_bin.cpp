class Solution {
public:
    
      int bin2int (string s) {
        int res = 0;
        for (int i = 0; i < s.length();i++){
            if (s[i] == '1'){
                res += pow(2, s.length() - 1 - i );
            }
        }
        return res;
    }
    
    bool hasAllCodes(string s, int k) {
        
        if (k > s.length()) return false;
                
        vector<string> all_substrings;
        set<int> values_substring;

        for (int i =0; i <= s.length()- k; i++){
            string ss = s.substr(i, k);
            all_substrings.push_back(ss);
            values_substring.insert(bin2int(ss));
        }

        for (int i = 0; i < pow(2, k); i++){
            if (values_substring.find(i) == values_substring.end())
            { 
                return false;
            }
        }

        return true;
        
    }
};