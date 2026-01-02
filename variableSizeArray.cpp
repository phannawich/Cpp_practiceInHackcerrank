#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    scanf("%d %d", &n, &q);
    std::vector<vector<int>> variableSizeArrays(n, vector<int>(1));
    // Input
    int k;
    for (int a = 0; a < n; a++) {
        cin >> k;     
        variableSizeArrays[a].resize(k, 0);
        for (int b = 0; b < k; b++) {
            cin >> variableSizeArrays[a][b];
        }
    }
    
    //print based on query
    int i;
    int j;
    for (int t= 0; t < q; t++) {
        cin >> i >> j; 
        cout <<  variableSizeArrays[i][j] << endl;
    }
    return 0;
}
