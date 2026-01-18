#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'findSmallestMissingPositive' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY orderNumbers as parameter.
 */

int findSmallestMissingPositive(vector<int> orderNumbers) {
    int n = orderNumbers.size();

    for (int i = 0; i < n; i++)
    {
        while(i+1 != n){
            if(i < 1 || i > n){
                break;
            }
            
            int temp = orderNumbers[orderNumbers[i] - 1];

            if(temp == orderNumbers[i]){
                break;
            }
            orderNumbers[orderNumbers[i] - 1] = orderNumbers[i];
            orderNumbers[i] = temp;
        }
    }
    
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if(orderNumbers[i] == ans){
            ans++;
        }
        else{
            break;
        }
    }
    
    return ans;
}

int main()
{
    string orderNumbers_count_temp;
    getline(cin, orderNumbers_count_temp);

    int orderNumbers_count = stoi(ltrim(rtrim(orderNumbers_count_temp)));

    vector<int> orderNumbers(orderNumbers_count);

    for (int i = 0; i < orderNumbers_count; i++) {
        string orderNumbers_item_temp;
        getline(cin, orderNumbers_item_temp);

        int orderNumbers_item = stoi(ltrim(rtrim(orderNumbers_item_temp)));

        orderNumbers[i] = orderNumbers_item;
    }

    int result = findSmallestMissingPositive(orderNumbers);

    cout << result << "\n";

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
