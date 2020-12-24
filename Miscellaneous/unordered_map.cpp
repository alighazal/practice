#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

    unordered_map<  string, int > u;

    u["ali"] = 115;

    u["ahmed"] = 2;

    auto search = u.find("ali");

    if (search != u.end()) {
        std::cout << "Found " << search->first << " " << search->second << '\n';
    } else {
        std::cout << "Not found\n";
    }
 

    return 0;

}