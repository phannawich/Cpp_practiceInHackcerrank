#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    vector<int> vec;
    vec.reserve(N);
    
    for (size_t i = 0; i < N; i++) {
        int X;
        cin >> X;
        vec.push_back(X);
    }
    
    int Q;
    cin >> Q;
    for (size_t i = 0; i < Q; i++) {
        int Y;
        cin >> Y;
        vector<int>::iterator it = lower_bound(vec.begin(), vec.end(), Y);
        int pos = int(it - vec.begin()) + 1;
        if(it != vec.end() && *it == Y){
            printf("Yes %d\n", pos);
        }else{
            printf("No %d\n", pos);
        }
    }
    return 0;
}
