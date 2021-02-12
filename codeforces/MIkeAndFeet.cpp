#include <iostream>
#include <vector> 

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> beers;
    beers.resize(n);

    for (int i = 0; i < n; i++ ){
        cin >> beers[i];
    }

    for (int i = 1; i < n; i++){
        for (int k = 0; k < n-i; k++){
            vector<int> beersGroup;
            int max = beers[k];
            for (int j = k; j < k+i; j++){
                if (beers[j] > max)
                    max = beers[j];
            }
            beersGroup.push_back(max);
        }
    }

 
    return 0;
   
}