#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;



bool canJump(vector<int>& nums) {
        
        //know next move 
        
        for (int i = 0; i < nums.size();){
            int value_best_pos = 0;
            int best_pos = 0;
            
            cout << i;
            
            if (nums[i] >= nums.size() - i) return true;
            else{
                for (int j = 1; j <= nums[i]; j++){
                    
                    if ( i + j + nums[i+j] > value_best_pos ){
                        value_best_pos = i + j + nums[i+j];
                        best_pos = i + j;
                    }
                }
            }
            
            i = best_pos;
            
            if (i == nums.size()-1) return true;
            if (nums[i] == 0) return false;
            
        }
        
        //move the index
        
        //check if index > size => true, stuck false
        
        return true;

}


int main () {

    vector<int> nums { 2,0} ;
    cout << canJump(nums);



    return 0;
}