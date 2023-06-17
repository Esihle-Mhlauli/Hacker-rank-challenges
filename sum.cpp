#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,sum;
    bool constraint = false;
    
    while(constraint == false){
    cin>>a>>b;
    
    if(a<=1000 & a>=1 & b<=1000 & b>=1)
        {
            constraint = true;
        }
    }
    sum = a+b;
    cout<<sum;
    return 0;
}
