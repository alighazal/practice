
#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
#include <algorithm>


using namespace std;

int lengthOfLongestSubstring(string s) {
        
    
    unordered_map<char, int> char_pos;
    int Len = 0;
    int maxLen = 0;
   
    for (int i = 0; i < s.length(); i++ ){  
        if (char_pos.find(s[i]) == char_pos.end()) {
            char_pos[s[i]] = -1;
        }
    }
    
    for (int i = 0; i < s.length(); i++ ){  

        if (char_pos[s[i]] == -1) {
            char_pos[s[i]] = i;            
            Len++;
        }
        else {
        
            if (Len - char_pos[s[i]] - 1 >= Len){
                char_pos[s[i]] = i;
            } else {
                break;
            }
   
        }


    }

    return Len;
    
    
        
}

int main () {

    string ss = "abcabcddsdassscsklmeno" ;
    cout << lengthOfLongestSubstring(ss);



    return 0;
}