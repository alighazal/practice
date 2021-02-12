#include <iostream>
#include <vector>

using namespace std;

int main() {
   
    int n, a;
    int redius;
    vector<int> t;

    cin >> n >> a;
    redius = max(n-a, a);
    a -= 1;

    int v;
    for (int i = 0; i < n; i ++){
        cin >> v;
        t.push_back(v);
    }

    int count = 0;
    bool flag = true;

    if (t[a] == 1) count++;

    for (int i = 1; i < redius; i++){
        flag = true;
        if ( a - i  > -1 &&  a + i < n ){
            if (t[a+i] == 1 && t[a-i] == 1)
                count += 2;
        continue;
        }

        if ( a - i  > -1  ){
            if (t[a-i] == 0)
                flag = false;
        }

        if (a + i < n){
            if (t[a+i] == 0)
                flag = false;
        }

        if (flag) count += 1;

    }
    cout << count;
    return 0;
   
}