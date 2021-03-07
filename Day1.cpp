// Good morning! Here's your coding interview problem for today.

// This problem was recently asked by Google.

// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

// Bonus: Can you do this in one pass?

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>k;
    sort(a,a+n);
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==k)
        {cout<<"yes"<<endl;break;}
        else if(a[i]+a[j]<k)
        {
            i++;
        }
        else
        j--;
    }
    if(i>=j)
    cout<<"No"<<endl;
}