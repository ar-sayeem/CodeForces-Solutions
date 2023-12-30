/// CodeForces - 1207A
/// There Are Two Types Of Burgers

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll long long
#define scl(n) scanf("%lld", &n)
#define pfl(x)              printf("%lld\n",x)
#define N 100006

int main()
{

    ll m,n,t,b,p,f,h,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0, Profit=0;
    scl(t);
    while(t--)
    {
        Profit = 0;
        cin >> b>>p>>f;
        cin >>h>>c;
        if(b==1)Profit=0;
        else
        {
            d=b/2;
            if(h>=c)
            {
                Profit=min(p,d)*h, d-=p;
                if(d>0) Profit+=min( f,d)*c;
            }
            else
            {
                Profit=min(f,d)*c, d-=f;
                if(d>0)Profit+=min( p,d)*h;
            }
        }
        pfl(Profit);
    }

    return 0;
}
