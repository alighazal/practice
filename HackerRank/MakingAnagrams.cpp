#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    
    sort(a.begin(), a.end() );
    sort (b.begin(), b.end());
    
    int similar = 0;
    
    vector<int> seen;
    seen.resize(b.size());
    
    for(int i  = 0; i < b.length(); i++){
        seen[i] = 0;
    }
    
    for(int i  = 0; i < a.length(); i++){
        for(int j  = 0; j < b.length(); j++){
         
            if (a[i] == b[j] && seen[j] == 0){
                similar++;
                seen[j] = 1;
                break;
            }
            
        }
    }
    
   /*  cout << a << " : "<< a.length()  << endl 
        << b << " : " << b.length() << endl << similar << endl;
     */
    
    return a.length() + b.length() - 2*similar;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
