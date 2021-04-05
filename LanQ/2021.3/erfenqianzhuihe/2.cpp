#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

double n;

int main()
{
    cin >> n;
    double l = -10000, r = 10000;
    while(r - l > 1e-8)
    {
        double mid = (l + r) / 2 ;
        if(mid * mid * mid < n) l = mid;
        else r = mid;
    }
    printf("%lf", l);
    return 0;
}