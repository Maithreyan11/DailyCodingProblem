#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
};
Node* newNode(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));  
    node->key=data;
    node->left=node->right=NULL;
    return (node);
}
Node* insertLevelOrder(ll arr[], Node* root,int i,ll n)
{
    if(i<n)
    {
        Node* temp=newNode(arr[i]);
        root=temp;
        root->left=insertLevelOrder(arr,root->left,2*i+1,n);
        root->right=insertLevelOrder(arr,root->right,2*i+2,n);
    }
    return root;
}
int unival(Node* root)
{
    int count=0;
    // if(root->right==root->left&&root->left!=NULL)
    //     count++;
    if(root->left==NULL&&root->right==NULL)
    {
        //cout<<"q"<<endl;
        count++;
        return count;
    }
    else if(root->left->key==root->right->key&&root->key==root->left->key)
    {
        //cout<<"k"<<endl;
        return unival(root->left )+ unival(root->right)+1;
    }
    else{
        return unival(root->left )+ unival(root->right);
    }

}
// int equ(Node* root)
// {
//     if()
// }
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Node* root=insertLevelOrder(a,root,0,n);
    ll ans=unival(root);
    // ans+=equ(root);
    cout<<ans;
}