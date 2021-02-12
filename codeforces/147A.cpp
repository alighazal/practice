#include <iostream>
#include <string> 

using namespace std;

int main() {

    string in;
    string out;

    getline(std::cin, in);

    for (int i = 0; i < in.length(); i++){

        if (in[i] == ' '){
            continue;
        } 

        else if (in[i] == '.' || in[i] == ',' || in[i] == '!' || in[i] == '?'){
         out += in[i];        
         out += ' ';        
        }
        else {
            if (i - 1 > -1 && in[i-1] == ' ' && out[out.length()-1]  != ' '){
                out += ' ';
            }
            out += in[i];
        }
    }

    cout << out;
    
   
    return 0;
   
}