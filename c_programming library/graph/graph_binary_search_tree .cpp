#include <bits/stdc++.h>
using namespace std;
#define ll long long int 


struct Node
{
    int data ;
    struct Node *left;
    struct Node *right;
};

struct Node *root;


void insert(int value)
{
    struct Node *newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode-> data = value ;
    newnode->right = NULL ; 
    newnode ->left = NULL;

    if(root == NULL)
    {
        root = newnode;
    }
    else
    {
        struct Node *temp = root; 
        while(1)
        {
             if(newnode->data <= temp->data )
             {
                if(temp->left ==NULL)
                    temp ->left = newnode;
                else 
                    temp = temp->left;
             }
             else
             {
                if(temp->right == NULL)
                    temp->right = newnode;
                else 
                temp = temp->right; 
             }
        }
    }

}
 
int main()
{
    root = NULL; 

    insert(55);
    insert(40);
    insert(80);
    insert(34);
    




    



    return 0;
}
