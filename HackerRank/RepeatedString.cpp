#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

    long long As_in_s = 0;

    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'a')
            As_in_s++;
    }

    long long num_of_s_in_n = n / s.length();

    long long num_of_As_in_n = num_of_s_in_n * As_in_s;

    for (int i = 0; i <  n % s.length(); i++){
        if (s[i] == 'a')
            num_of_As_in_n++;
    }

    return num_of_As_in_n;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
