#include<stdio.h>
#include<stdlib.h>


struct tnode
{
    int data;
    struct tnode *right;
    struct tnode *left;

struct tnode* CreateBST(struct tnode *root, int item)
{
  if(root==NULL)
  {
    root = (struct tnode *)malloc(sizeof(struct tnode));
    root->left = root->right = NULL;
    root->data = item;
    return root;
  }

  else
  {
    if(item< root->data)
      root->left = CreateBST(root->left, item);

    if(item>root->data)
      root->right = CreateBST(root->right, item);
  }
  return(root);
}

void Inorder(struct tnode * root)
{
  if(root != NULL)
  {
    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right);
  }
}


struct tnode * SearchBST(struct tnode * root, int key)
{
  if(root==NULL)
  {
      printf("No nodes in tree\n");
      return 0;
  }
  else
  {
    if(root->data == key)
      printf("Print found!\n");
    if(key<root->data)
    {
      root->left =SearchBST(root->left, key);

    }
    if(key>root->data)
    {
      root->right = SearchBST(root->right, key);

  }
  return(root);
}

struct tnode *findMin(struct tnode *root)
{
  struct tnode *temp = root;
  while(temp->left!= NULL)
  {
    temp=temp->left;
  }
  return temp;
}

struct tnode* Delete(struct tnode* root, int item)
{
  if(root ==NULL)
  {
    return root;
  }
  else if(item<root->data)
  {
    root->left =Delete(root->left, item);
  }
  else if(item>root->data)
  {
    root->right = Delete(root->right, item);
  }
  else
  {
    if(root->left==NULL && root->right==NULL)
    {
      free(root);
      root=NULL;
      return root;
    }
    else if(root->left==NULL && root->right != NULL)
    {
      struct tnode* temp=root;
      root=root->right;
      printf("%d deleted!", temp->data);
      free(temp);
      return root;
    }
    else if( root->left != NULL && root->right == NULL)
    {
      struct tnode* temp = root;
      root= root->left;
      printf("%d  deleted!", temp->data);
      free(temp);
      return root;
    }
    else
    {
      struct tnode * temp = findMin(root->right);
      root->data=temp->data;
      root->right=Delete(root->right, temp->data);
      return root;
    }
  }
}


int main()
{
  struct tnode *root = NULL;
  int ch, item;
  do
  {
      printf("\nEnter the choice you want to take\n1. Insert\n2. Print the data of the BST\n3. Search\n4. Deletion of the node.\n5.Exit\n");
      scanf("%d", &ch);
      switch(ch)
      {
        case 1:
                  printf("\nEnter the data for the node  : ");
                  scanf("%d", &item);
                  root = CreateBST(root, item);
                  break;

        case 2:
                  Inorder(root);
                  break;
        case 3:
                printf("\nEnter the value you want to search :: " );
                scanf("%d", &item);
                root = SearchBST(root, item);
                break;

        case 4: printf("\nEnter the value you want to delete :: ");
                scanf("%d", &item);
                root = Delete(root, item);
                break;
        case 5:

                break;
        default: break;
      }
  }while(ch!=5);
}
