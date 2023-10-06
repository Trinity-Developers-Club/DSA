
// This code implments Binary Search Trees
// Implementing insertion,deletion,searching. 
// Also implements some standard traversals
// And one common binary search tree problem ( kth smallest element )



#include<iostream>
using namespace std;
// Defining a Node
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
// Creating class for Binary Search Tree
class BST{
    public :
    node* root= new node(70);
    // Function for inserting into a BST
    node* insert(node* root,int d){
        
        

        if(root==NULL){
            root=new node(d);
            return root;
        }
        if(d>root->data){
            root->right=insert(root->right,d);
        }
        else{
            root->left=insert(root->left,d);
        }
        return root;
    }
    // Function for searching in BST
    bool search(node* root,int x){
        
        if(root==NULL){
            return false;
        }
        if(root->data==x)
            return true;
        if(root->data >x){
            return search(root->left,x);
        }
        else{
            return search(root->right,x);
        }
    }
    // For minimum element in BST
    node* min(node* root){
        node* tmp=root;
        while(tmp->left!=NULL){
            tmp=tmp->left;
        }
        return tmp;
    }
    //For maximum element in BST
    node* max(node* root){
        node* tmp=root;
        while(tmp->right!=NULL){
            tmp=tmp->right;
        }
        return tmp;
    }
    //For deleting node form BST
    node* deletion(node* root,int val){
        
        if(root==NULL){
            return root;
        }
        if(root->data==val){
            // 0 child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            // 1 child
            if(root->left!=NULL && root->right==NULL){
                node* tmp=root->left;
                delete root;
                return tmp;
            }
            if(root->right!=NULL && root->left==NULL){
                node* tmp=root->right;
                delete root;
                return tmp;

            }
            //2 Child
            if(root->right!=NULL && root->left!=NULL){
                int minimum=min(root->right)->data; 
                root->data=minimum;
                root->right=deletion(root->right,minimum);
                return root;
            }

        }
        else if(root->data>val){
            root->left=deletion(root->left,val);
            return root;
        }
        else{
            root->right=deletion(root->right,val);
            return root;
        }
    }
    //  Inorder Traversal
     void inorder(node* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<< root->data <<" ";
        inorder(root->right);
     }
        // To check if the tree is BST or not
     bool isBST(node* root,int min,int max){
        if(root==NULL){
            return true;
        }

        if(root->data >= min && root->data <= max){
            bool left= isBST(root->left,min,root->data);
            bool right=isBST(root->right,root->data,max); 
            return left && right;
        }
        else 
         return false;
     }
     // Find Kth smallest element in a BST
     int kthsmallest(node* root,int &i,int k){
        if(root==NULL){
            return -1;
        }
        int left=kthsmallest(root->left,i,k);
        if(left!=-1){
            return left;
        }
        i++;
        if(i==k){
            return root->data;
        }
        return kthsmallest(root->right,i,k);
     }

};

int main(){
    int chc,x,y,d,k,i;
    BST B;
    while(1){
    cout<<"\n1.INSERT \n 2.SEARCH \n 3.DELETE \n 4.INORDER  \n 5.CHECK IF BST \n 6.Kth smallest element \n 7.EXIT \n ENTER CHOICE : ";
    cin>>chc;
    if(chc==1){
        cout<<"Enter data to insert into BST";
        cin>>d;
        B.insert(B.root,d);
    }
    else if(chc==2){
        cout<<"Enter data to search";
        cin>>x;
        if(B.search(B.root,x)) 
            cout<<"Found !";
        else{
            cout<<"Not Found";
        }
    }
    else if(chc==3){
        cout<<"Enter data to delete";
        cin>>y;
        B.root=B.deletion(B.root,y);
    }
    else if(chc==4){
        B.inorder(B.root);
    }
    else if(chc==5){
        if(B.isBST(B.root,B.min(B.root)->data,B.max(B.root)->data)){
            cout<<"It is a BST!";
        }
        else{
            cout<<"Not a BST";
        }
    }
    else if(chc==6){
        i=0;
        cout<<"Enter the value of k : ";
        cin>>k;
        cout<<B.kthsmallest(B.root,i,k);
    }
    else{
        break;
    }
    }
    return 0;
}