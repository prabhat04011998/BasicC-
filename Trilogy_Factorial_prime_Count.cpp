#include<bits/stdc++.h>
using namespace std;
bool isprime(long long n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (long long i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}
int solve(int a,int b)
{
    int ans,x,i;
    if(b%2==0)
    {
        // x=1+b;
        if(isprime(b+1))return 1;
        else return 0;
    }
    else
    {
        ans=0;
        x=1;
        for(i=1;i<b;i++)
        {
            x=x*i;
            if(isprime(x+b))ans++;
        }
        return ans;
    }
}
int main(){
   
    cout<<solve(9,10);
    return 0;
}
