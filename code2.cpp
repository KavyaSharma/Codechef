#include <iostream>
#include <algorithm>
using namespace std;

unsigned comb( unsigned n, unsigned k )
{
    if (k > n) 
    return 0;
    if (k * 2 > n)  
    k = n-k;
    if (k == 0)
    return 1;
 
    unsigned sol = n;
    for( unsigned l = 2; l <= k; ++l ) {
        sol *= (n-l+1);
        sol /= l;
    }
    return sol;
}

int main() {
    long long int n,k,j, sum=0;
    cin>>n>>k;
    for(j=0;j<=k;j=j+2)
    sum=sum+comb(n,j);
    sum=sum%1000000007;
    cout<<sum;
    return 0;
}