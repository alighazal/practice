#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int count;
    cin >> count;

    vector<int> stairs;
    vector<int> steps;
    int stairways = 0; 
    stairs.resize(count);

    for (int i = 0; i< count; i++){
        cin >> stairs[i];
    }

    int step_count = 0;

    for (int i = 0; i< count; i++){

        if (stairs[i] == 1)
            stairways++;

        if (stairs[i] == 1 && i != 0 ){
            steps.push_back(step_count);
            step_count = 0;
        }

        step_count++;

        if (i == count -1){
            steps.push_back(step_count);
        }

        
            
    }

    cout << stairways << endl;
    for (auto & s: steps){
        cout << s << ' ';
    }

    return 0;
    
}