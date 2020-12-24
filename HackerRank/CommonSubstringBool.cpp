#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    
    /*
    **** Time limit exceeded ****
    
    for (auto &p : s1 ){
        for (auto &k : s2){
            if (p == k) {
                return "YES";
            }
        }
    }
    
    return "NO";
    */
    
    unordered_map<char, bool> dict;
    
    for (auto &c : s1){
        dict[c] = true;    
    }
    
    for (auto &c : s2) {
        
       if (dict.find(c) != dict.end()) {
            return "YES";             
        } else {
            continue;
        }
    }
    
    return "NO";  

}    
    


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
