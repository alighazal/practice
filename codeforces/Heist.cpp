#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    vector<long> indices; 
    int count;
    cin >> count;
    indices.resize(count);

    for (int i =0; i< count; i++){
        cin >>  indices[i];
    }

    sort(indices.begin(), indices.end());


    if (count == 1){
        cout << 0;
        return 0 ;
    }

    int max_diff = indices[1] - indices[0];
    for(int i = 1; i < count; i++) {
        if (indices[i] - indices[i-1] < max_diff)
            max_diff = indices[i] - indices[i-1];
    }

    if (max_diff == 1){
        cout << 0;
    }else {
        cout << max_diff;
    }

    return 0;
   
}