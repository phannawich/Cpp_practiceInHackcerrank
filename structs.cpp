#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct Student{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Student s;
    cin >> s.age >> s.first_name >> s.last_name >> s.standard;
    cout << s.age << " " << s.first_name << " " << s.last_name << " " << s.standard;
    return 0;
}
