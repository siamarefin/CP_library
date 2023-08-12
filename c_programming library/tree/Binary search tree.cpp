#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define cin(n) ll n ; cin>>n;
#define cout(n) cout<<n;
#define for_loop(i, j, n) for (ll i = j; i <= n; i++)
#define st(v) sort(v.begin(), v.end());
#define sz(x) (ll) x.size()
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define newline cout<<"\n";
#define space cout<<" ";



struct Node
{
    int data ;
    Node *left , *right ;


    Node (int val )
    {
        data = val ;
        left = NULL ;
        right = NULL; 
    }
};



Node* insertBST (Node *root ,int val)
{
    if(root == NULL )
    {
        return new Node(val);
    }
    if( val < root->data )
    {
        root->left = insertBST(root->left , val );
    }  
    else  
    {
        root->right = insertBST(root->right , val);
    }

    return root ;

}


void inorder(Node *root)
{
    if(root == NULL)
        return ;

    inorder (root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}


 
int main()
{

    Node *root;
    root = insertBST(NULL,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);


    inorder(root);

    newline




    



    return 0;
}
