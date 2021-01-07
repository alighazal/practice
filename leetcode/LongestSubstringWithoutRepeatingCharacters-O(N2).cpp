
#include <iostream>
#include <set>
#include <string>


using namespace std;

int lengthOfLongestSubstring(string s) {
        
    set<char> chars;
    int maxLen = 0;
    int Len = 0;
    
    
    for (int i = 0; i < s.length(); i++ ){
        Len = 0;
        chars.clear();
        for (int j = i; j < s.length(); j++){

            if (chars.find(s[j]) == chars.end()){
                Len++; 
                
                if (Len >= maxLen) 
                    maxLen = Len;  
            }
            else {   
                Len = 1;
                chars.clear();
            }

            chars.insert(s[j]);
            
        }
        
    }
    
    return maxLen;
        
}

int main () {

    string ss = "abcabcabc" ;
    cout << lengthOfLongestSubstring(ss);



    return 0;
}