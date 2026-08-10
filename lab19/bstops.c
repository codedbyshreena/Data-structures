#include<stdio.h>
#include<stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* CreateNode(int val) {
    struct TreeNode *newNode = (struct TreeNode *) malloc(sizeof(struct TreeNode));

    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct TreeNode* InsertNode(struct TreeNode* root, int val) {

    if(root == NULL) {
        return CreateNode(val);
    }
    else if(root->data < val) {
        root->right = InsertNode(root->right, val);
    }
    else {
        root->left = InsertNode(root->left, val);
    }
    
    return root;
}

int SearchNode(struct TreeNode* root, int val) {
    
    if(root == NULL) {
        return 0;
    }
    if(root->data == val) {
        return 1;
    }
    else if(val < root->data) {
        return SearchNode(root->left, val);
    }
    else {
        return SearchNode(root->right, val);
    }

}

void Preorder(struct TreeNode* root) {

    if(root != NULL) {

        printf("%d ", root->data);
        Preorder(root->left);
        Preorder(root->right);

    }
}

void Inorder(struct TreeNode* root) {

    if(root != NULL) {

        Inorder(root->left);
        printf("%d ", root->data);
        Inorder(root->right);
        
    }
}

void Postorder(struct TreeNode* root) {

    if(root != NULL) {

        Postorder(root->left);
        Postorder(root->right);
        printf("%d ", root->data);
        
    }
}

struct TreeNode* Inorder_Successor(struct TreeNode* root) {

    while(root != NULL && root->left != NULL) {
        root = root->left;
    }

    return root;
}

struct TreeNode* DeleteNode(struct TreeNode* root, int val) {

    if(root == NULL) {
        return NULL;
    }
    if(root->data < val) {
        root->right = DeleteNode(root->right, val);
    }
    else if(root->data > val) {
        root->left = DeleteNode(root->left, val);
    }
    else {

        if(root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        else if(root->right == NULL) {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }
        else if(root->left == NULL) {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        }
        else {
            struct TreeNode* in = Inorder_Successor(root->right);
            root->data = in->data;
            root->right = DeleteNode(root->right, in->data);
        }

    }
}

void main() {
    struct TreeNode* root = NULL;

    root = InsertNode(root, 50);
    root = InsertNode(root, 30);
    root = InsertNode(root, 70);
    root = InsertNode(root, 20);
    root = InsertNode(root, 40);
    root = InsertNode(root, 60);
    root = InsertNode(root, 80);

    printf("Inorder Traversal: ");
    Inorder(root);
    printf("\n");

    printf("Preorder Traversal: ");
    Preorder(root);
    printf("\n");

    printf("Postorder Traversal: ");
    Postorder(root);
    printf("\n");

    int key = 40;
    if(SearchNode(root, key))
        printf("Node %d found!\n", key);
    else
        printf("Node %d not found!\n", key);

    root = DeleteNode(root, 30);
    printf("Inorder after deleting 30: ");
    Inorder(root);
    printf("\n");
}