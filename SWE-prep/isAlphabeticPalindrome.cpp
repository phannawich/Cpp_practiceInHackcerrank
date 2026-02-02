#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'isAlphabeticPalindrome' function below.
 *
 * The function is expected to return a BOOLEAN.
 * The function accepts STRING code as parameter.
 */

bool isAlphabeticPalindrome(string code) {
    int left = 0;
    int right = code.size() - 1;

    while (left < right){
        while (left < right && !isalpha(code[left])){
            left++;
        }
        while (left < right && !isalpha(code[right])){
            right--;
        }
        if(tolower(code[left]) != tolower(code[right])){
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main()
{
    string code;
    getline(cin, code);

    bool result = isAlphabeticPalindrome(code);

    cout << result << "\n";

    return 0;
}
