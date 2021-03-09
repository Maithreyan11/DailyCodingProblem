// Good morning! Here's your coding interview problem for today.

// This problem was asked by Stripe.

// Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

// For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

// You can modify the input array in-place.

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    ll i;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            if(a[i]==1)
            continue;
            else{
                if(a[i]-a[i-1]==1)
                continue;
                else{
                    if(a[i-1]<1){
                    cout<<"1"<<endl;break;}
                    cout<<a[i-1]+1<<endl;
                    break;
                }
            }
        }
    }
    if(i==n)
    cout<<a[n-1]+1<<endl;

}