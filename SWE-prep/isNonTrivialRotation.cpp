#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'isNonTrivialRotation' function below.
 *
 * The function is expected to return a BOOLEAN.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

bool isNonTrivialRotation(string s1, string s2) {
    if (s1.size() != s2.size()){
        return false;
    }
   int length = (int)s1.size();
   if(length <= 1){
    return false;
   }
   for (int i = 0; i < length; i++){
        s2.push_back(s2[0]);
        s2.erase(0,1);
        if (s1 == s2) {
            return true;
        }
   }
   return false;
}

int main()
{
    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    bool result = isNonTrivialRotation(s1, s2);

    cout << result << "\n";

    return 0;
}
