#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    
    unordered_map<char,int> char_count;
    
    for (int i = 0; i < s.length(); i++) {
        if(char_count.find(s[i]) == char_count.end()){
            char_count[s[i]] = 1;
        }else {
            char_count[s[i]]++;
        }
    }
    
    int occ = char_count[s[0]];
    bool oneVoilation  = false;
    
    for (auto &c : char_count){
    
        cout << c.first << "  " << c.second << endl;
        
        if(c.second != occ )
        {
      
            if (abs(c.second - occ) > 1)
            {
                if (c.second == 1){
                    
                     if (oneVoilation){
                        return "NO";  
                    }
                    else {
                        oneVoilation = true;
                    }
                    
                } else return "NO";  
            } 
            else {
                
                if (oneVoilation){
                    return "NO";  
                }
                else {
                    oneVoilation = true;
                }
                
            }        
        }
    }
    return "YES";    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
