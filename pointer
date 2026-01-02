#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sumAndDiff(int *a, int*b){
    int c = (*a) + (*b);
    int d = (*a) - (*b);
    if (d < 0){
        d = d + (-d) + (-d);
    }
    // Not sure if I could use std::abs()
    (*a) = c;
    (*b) = d;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b); 
    sumAndDiff(&a ,&b);
    printf("%d\n%d", a, b);
    return 0;
}
