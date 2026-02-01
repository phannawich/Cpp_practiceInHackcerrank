#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'isAlphabeticPalindrome' function below.
 *
 * The function is expected to return a BOOLEAN.
 * The function accepts STRING code as parameter.
 */

bool isAlphabeticPalindrome(string code) {
    
    vector<char> letterOnlyCode;
    for (char l : code) {
        if (l >= 'A' && l <= 'Z') {
            letterOnlyCode.push_back(std::tolower(l));
        }
        if(l >= 'a' && l <= 'z'){
            letterOnlyCode.push_back(l);
        }
    }
    
    if((int)letterOnlyCode.size() <= 1){
        return true;
    }
    
    int check = 0;
    int j = letterOnlyCode.size() - 1;
    for (int i = 0; i < (int)letterOnlyCode.size() / 2; i++) {
        if (letterOnlyCode[i] != letterOnlyCode[j]){
            return false;
        }else{
            check = 1;
            j--;
        }
    }
    
    if(check == 1){
        return true;
    }
    
    return false;
}

int main()
{
    string code;
    getline(cin, code);

    bool result = isAlphabeticPalindrome(code);

    cout << result << "\n";

    return 0;
}
