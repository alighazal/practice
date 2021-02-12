#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    
    string name;
    set<char> unique_chars;

    cin >> name;

    for (auto &c : name){
        unique_chars.insert(c);
    }

    if (unique_chars.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else {
        cout << "IGNORE HIM!" << endl;
    }


    return 0;
   
}