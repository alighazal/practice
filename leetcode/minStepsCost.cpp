// NOT WORKING 


#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    

    reverse(cost.begin(),  cost.end());

    int min_cost = 0;
    
    //starting position
    
    int i  = (cost[0] >= cost[1])? 1: 0; 
    min_cost += cost[i];
    
    
    do {
        
        if (cost[i+1] == cost[i+2]) {
            
            i = i + 2;
        }
        else if (cost[i+1] > cost[i+2]) {
            
            i = i + 2; 

        }  else {

            i = i + 1; 

        }       
        
        min_cost += cost[i];
        
    } while (i < cost.size()-2);
    
    return min_cost;
    
}


int main () {

    vector<int> costs { 0,2, 2, 1} ;
    cout << minCostClimbingStairs(costs);



    return 0;
}