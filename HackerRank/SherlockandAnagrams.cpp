#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
    
    //inserting all substrings into a dict
    
    unordered_map<string, int> sub_str;
    string str_t;
    
    for (int start = 0; start < s.length(); start++){
        for (int end = start + 1; end <= s.length(); end++ ){
            
            str_t = s.substr(start, end - start);
            sort(str_t.begin(), str_t.end());
            
            if (sub_str.find(str_t) == sub_str.end()){
                sub_str[str_t] = 1;
            } else {
             sub_str[str_t]++;      
            }
            //cout << str_t << endl; 
        }
    }
    
    // search for anagrams
    
    int ana = 0;      //anagram of charaters
    string rev;
    for (auto &d : sub_str) {
        
        ana += (d.second ) * (d.second - 1) * .5;  
           
        //cout << d.first << "--" << d.second << endl;  

        /*

        **** EXPLANATION ****
        i figured out the relation between the number of occurances of a substring 
        and its contribtuions of to the total number of anagrams
        Ex:
        1 => 0
        2 => 1
        3 => 3
        4 => 6
        ....

        it is, basically, the arithmantic sum of numbers from 0 to n-1

        it follow this formula : .5 * (n) * (n -1 - (0) )

        */ 
    }
    
    //cout << "---" <<endl;
    return ana;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
