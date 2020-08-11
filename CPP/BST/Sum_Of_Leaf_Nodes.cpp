/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Structure of the node of the binary tree is as
struct Node
{
	int data;
	Node *left, *right;
};*/
// function should return the sum of all the 
// leaf nodes of the binary tree 
int sumLeaf(Node* root)
{
    int sum = 0;
    if((root->left==NULL)&&(root->right==NULL))
        return (sum+root->data);
        
    else if(root->left==NULL)
      return (sum+sumLeaf(root->right));
      
    else if(root->right==NULL)
      return (sum+sumLeaf(root->left));
      
    else
      return (sum+sumLeaf(root->left)+sumLeaf(root->right));
}