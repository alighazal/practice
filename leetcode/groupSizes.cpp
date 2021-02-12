
#include <iostream>
#include <set>
#include <string>
#include <vector>


using namespace std;


vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
    
    set<int> sizes;
    vector<vector<int>> result;
    for (int i= 0; i < groupSizes.size(); i++ ){
        sizes.insert(groupSizes[i]);
    }
    
    for (auto &s: sizes){
        cout << s << endl;
        vector<int> group;
        for (int i= 0; i < groupSizes.size(); i++ ){
            if (groupSizes[i] == s){
                group.push_back(i);
            }
            
            if (group.size() == s){
                result.push_back(group);
                group.clear();
            }
        }
    }
    
    return result;
    
}

int main () {

    vector<int> g {3,3,3,3,3,1,3};
    vector<vector<int>>  r = groupThePeople(g);



    return 0;
}