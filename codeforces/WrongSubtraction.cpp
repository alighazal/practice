#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int number, it;

    cin >> number >> it;

    for (int i =0; i < it; i++){

        if (number % 10 == 0 ){
            number /= 10;
        }else {

            number --;

        }

    }

    cout << number;

    return 0;
   
}