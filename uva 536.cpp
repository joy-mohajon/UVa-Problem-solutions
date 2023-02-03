#include<bits/stdc++.h>

using namespace std;

int i=0;
struct node
{
    char data;
    struct node *left;
    struct node *right;
};

struct node *tree(string preord, string inord, int start, int endd)
{
    if(start > endd)
        return NULL;

    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    //creating node with each of the letter of preorder string
    new_node->data = preord[i++];

    int index;
    // find out index of preorder's letter in inorder string
    for(int j=start; j<=endd; j++)
    {
        if(inord[j]==new_node->data)
        {
            index=j;
            break;
        }
    }
    //for visitintg left side
    new_node->left = tree(preord, inord, start, index-1);
    //for visiting right side
    new_node->right = tree(preord, inord, index+1, endd);

    return new_node;
}

// displaying by postorder..
void postOrd(struct node *temp)
{
    if(temp == NULL)
        return ;

    postOrd(temp->left);
    postOrd(temp->right);

    cout << temp->data;
}

int main()
{
    string preord, inord;
    while(cin >> preord >> inord)
    {
        int len = preord.size();

        i=0;
        struct node *root = tree(preord, inord, 0, len-1);

        postOrd(root);

        cout << endl;
    }
    return 0;
}
