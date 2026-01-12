#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    std::vector<int> vec;
    int X;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> X;
        vec.push_back(X);
    }
    //Edgecase: nothing in array
    if(vec.size() == 0){
        return 0;
    }
    int Q;
    cin >> Q;
    int Y;
    for (int i = 0; i < Q; i++) {
        cin >> Y;
        //Edgecase: only 1 element in array
        if(vec.size() == 1){
            if (vec[0] == Y) {
                printf("Yes 1\n");
            }else if(vec[0] < Y){
                printf("No 2\n");
            }else{
                printf("No 1\n");
            }
            continue;
        }
       
       int left = 0;
       int right = vec.size() - 1; 
       int value = -1;
       int mid = -1;
        while (left <= right) {
            mid = left + ((right - left) / 2);
            if (vec[mid] == Y){
                value = mid;
                right = mid - 1;
            }
            else if(vec[mid] < Y){
                left = mid + 1;
            }else {
                right = mid -1;
            }
        }
        
        if(value != -1){
            printf("Yes %d\n", value + 1);
        }else {
            printf("No %d\n", left + 1);
        }
    }
    return 0;
}
