#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getRow(int rowIndex) {
    
    if (rowIndex == 0) {

        vector<int> ans = {1};
        return ans;
    }
    else if (rowIndex == 1) {

        vector<int> ans = {1,1};
        return ans;

    }

    vector<int> pre_row = getRow(rowIndex - 1 );
    vector<int> ans;


    for ( int j = 0; j < (pre_row.size() + 1); j++ ){

        if (j == 0) {
            ans.push_back(pre_row[0]);
        }else if (j ==  pre_row.size() ) {
            ans.push_back(pre_row[pre_row.size()-1]);
        }else {
            ans.push_back(pre_row[j] + pre_row[j-1]);
        }


    }

    return ans;
            
}

int main () {


    vector<int> ans;

   ans= getRow(3); 

   for (int i = -1; i <5; i ++){
       cout << "helllo" << endl;
   }

   return 0;

}