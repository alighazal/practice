#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {

    int n; 
    cin >> n;
    vector <vector<int>> a;
    vector <int> r;
    a.resize(n);

    for (int i = 0; i < n; i ++){
        a[i].resize(n);
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    bool maxTaken = false;
    int t;
    for (int i = 0; i < n; i ++){

        t = *max_element(a[i].begin(), a[i].end());

        if (t == n-1){
            if (maxTaken) {
                r.push_back(t);
            }
            else  {
                r.push_back(n);
                maxTaken = true;
            }
            continue;
        }

        r.push_back(t);        
    }

     for (int i = 0; i < n; i ++){

      cout << r[i] << " ";      
    }

   
    return 0;
   
}