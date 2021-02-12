#include <iostream>
#include <string> 

using namespace std;

int main() {

    string in;
    int flips = 0;
    cin >> in;

    for (int i= 0; i < in.length();i++) {
        if (isdigit(in[i])){
            if ((in[i] - '0') % 2 == 1 ){
                flips++;
            }
        }else if (isalpha(in[i])){
            if (in[i] == 'a' || in[i] == 'i' ||  in[i] == 'e' ||  in[i] == 'o' ||  in[i] == 'u'){
                flips++;
            }
        }
    }

    cout << flips;    
 
    return 0;
   
}