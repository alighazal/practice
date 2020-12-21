// working but a bit slower

string int2bin(int x, int k ) {
        string res = "";
        while ( x > 0){
            if (x%2 == 0)
                res += '0';
            else res += '1';
            
            x /= 2;
        }
        
        for (int i = res.length(); i < k; i++){
            res += '0';
        }
        
        reverse(res.begin(),res.end());
        
        return  res;
    }
    
    vector <string> generateCompinations (int k){
        vector <string> possible_numbers;
        int range = pow(2,k);
        
        for (int i = 0; i < range; i++){
            possible_numbers.push_back(int2bin(i, k));
            cout << int2bin(i, k) << endl;
        }
        
        return possible_numbers;
            
    }
    
    bool hasAllCodes(string s, int k) {
        
        vector <string> possible_numbers = generateCompinations(k);
        
        for (int i = 0; i < possible_numbers.size(); i++){
          if ( s.find(possible_numbers[i]) == std::string::npos){
              return false;
          }
        }
        
        return true;
        
    }