int avoidObstacles(vector<int> inputArray) {

    int max = *max_element(inputArray.begin(), inputArray.end());
    
    int len = max + 1;
    
    bool obs[len];
    
    for (int i = 0; i < len; i++){
        obs[i] = false;
    }
    
    for (int i = 0; i <  inputArray.size(); i++ ){
        obs[inputArray[i]] = true;
    }
    
    for (int i = 1; i < len; i++) {
        bool valid = true;
        for (int j = 0; j < len; j+=i){
            if (obs[j] == true){
                valid = false;
                break;
            }
        }
        if (valid)  return i;       
    }


}
