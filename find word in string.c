#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str;
    int count =0;
    getline(cin, str);
    for(int i=0; i<str.size(); i++){
        if(str[i] == ' ')
            count++;
    }
    if(str[str.size() - 1] == ' ')
        count--;
    cout<<count+1;
    return 0;
}