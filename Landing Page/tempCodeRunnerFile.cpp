#include<bits/stdc++.h>
using namespace std;
float ans;
int binary(int l,int h,int target,int root)
{
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(pow(mid,3)==target)
        return mid;
        else if(pow(mid,3)>target)
        h=mid-1;
        else
        l=mid+1;
    }

    return h;
}
float binary(float l,float h,float target)
{
    while(l<=h)
    {
        float mid=(l+h)/2;
        if(pow(ans+mid,3)==target)
        return mid;
        else if(pow(ans+mid,3)>target)
        h=mid-0.001;
        else
        l=mid+0.001;
    }

    return h;
}
int main()
{
    float  num=10;
    float l=0;

ans= binary(l,num,num);

cout<<setprecision(4)<<ans<<endl;
return 0;

}