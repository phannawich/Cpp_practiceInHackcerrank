#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

struct AttrVal {
    string attr;
    string val;
};

struct Record {
    int tag;
    vector<AttrVal> item;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    scanf("%d %d\n", &n, &q);
    vector<Record> records (n);
    stringstream ss;
    string tagString;
    string tag;
    int tagNumber;
    string attribute;
    string equalSign;
    string value;
    for (int i = 0; i < n; i++) {
       getline(cin, tagString);
       if (tagString[1] == '/') {
        continue;
       }
       tagString.erase(tagString.begin());
       tagString.pop_back();
    //    cout << tagString << endl;
        ss.str(tagString);
        ss >> tag >> attribute >> equalSign >> value;
    //    cout << tag << endl;
    //    cout << tag << ' '<< attribute << ' ' << equalSign << ' ' << value << endl;
        tagNumber = int((tag[3]) - '0'); // Hold number 1 -> n
        value.erase(value.begin());
        value.pop_back();
        records[tagNumber - 1].item.push_back({attribute, value});
       ss.clear();
    }
    // print out
    // for (int i = 0; i < q; i++) {
    //     if () {
        
    //     }
    // }
    return 0;
}