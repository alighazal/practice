#include <iostream>
#include <string>
#include <vector>

using namespace std;



int maxScore(string s) {
    
    vector<int> zeroSum;
    vector<int> oneSum;

    zeroSum.resize(s.length());
    oneSum.resize(s.length());
    
    if ( s[0] == '0') {zeroSum[0] = 1;} 
    else {zeroSum[0] = 0; } 

    if ( s[s.length() -1 ] == '1') {oneSum[s.length() -1 ] = 1;} 
    else { oneSum[s.length() -1 ] = 0;} 
    
  for(int i = 1; i < s.length(); i++) 
    {          
        if ( s[i] == '0') zeroSum[i] = ++zeroSum[i-1];
        else  zeroSum[i] = zeroSum[i-1];
        if ( s[s.length() - i - 1] == '1') {oneSum[s.length() - i - 1] = ++oneSum[s.length() - i ]; } 
        else   oneSum[s.length() - i - 1] = oneSum[s.length() - i ];

        cout << zeroSum[i] << " - " << oneSum[s.length() - i - 1] << endl;
        
    }
    
    int max = 0;
    int left = 0;
    int right = 0;
    
    for(int i = 0; i < s.length()-1; i++) 
    {  
        left = zeroSum[i];
        right = oneSum[i];
        
        if (left+right > max) max = left+right; 

        cout << left << " -  " << right << endl;
        
    } 

    return max;
    
    
}


int main () {

    string s = "1111";

    cout << maxScore(s) << endl;

    return 0;
}