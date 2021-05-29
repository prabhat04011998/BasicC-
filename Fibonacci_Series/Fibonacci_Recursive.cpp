/******************************************************************************

Time Complexity- Exponential
Space Complexity- stack size(O(N)) else O(1)

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n=4;
    cout<<fib(n);
    
    return 0;
}
