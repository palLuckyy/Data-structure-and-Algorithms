<<<<<<< HEAD
#include<iostream>
#include<queue>
using namespace std;

class Node {

    public:
        int data;
        Node* left;
        Node* right;

        Node (int d) {
            this -> data = d;
            this -> left = nullptr;
            this -> right = nullptr;
        }
};

void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
Node* insertIntoBST(Node* root , int d) {
    // base case
    if(root == nullptr) {
        root = new Node(d);
        return root;
    }

    if(d > root -> data) {
        //right part m insert krna haii:
        root -> right = insertIntoBST(root -> right , d);
    }
    else {
        //left part m insert krna hai:
        root -> left = insertIntoBST(root -> left , d);
    }
    return root;
}

Node* minval(Node* root) {
    Node* temp = root;
    while(temp -> left != nullptr) {
        temp = temp -> left;
    }
    return temp;
}

Node* maxval(Node* root) {
    Node* temp = root;
    while(temp -> right != nullptr) {
        temp = temp -> right;
    }
    return temp;
}
Node* deleteFromBST(Node* root , int val) {
    // base case
    if(root == nullptr) 
         return root;

    if(root -> data == val) {
        //0 child
        if(root -> left == nullptr && root -> right == nullptr) {
            delete root;
            return nullptr;
        }

        //1child

        //left child
        if(root -> left != nullptr && root -> right == nullptr) {
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        //right child
        if(root -> left == nullptr && root -> right != nullptr) {
            Node* temp = root -> right;
            delete root;
            return temp;
        }

        //2child
        if(root -> left != nullptr && root -> right != nullptr) {
            int mini = minval(root -> right) -> data;
            root -> data = mini;
            root -> right = deleteFromBST(root -> right , mini);
            return root;
        }
    }    
    else if(root -> data > val) {
        root -> left = deleteFromBST(root -> left , val);
        return root;
    }
    else {
        root -> right = deleteFromBST(root -> right , val);
        return root;
    }
}
void takeInput(Node* &root) {
    int data;
    cin>> data;

    while(data != -1) {
        root = insertIntoBST(root , data);
        cin>> data;
    }

}
int main() {
    Node* root = nullptr;

    cout << "Enter data to create a BST: " << endl;
    takeInput(root);

    cout << " Printing the BST " << endl;
    levelOrderTraversal(root);

    cout << "Printing InOrder" << endl;
    inorder(root);
    cout << endl << "Printing PreOrder" << endl;
    preorder(root);
    cout << endl << "Printing PostOrder" << endl;
    postorder(root);
    cout << endl;

    cout << "Min Value is " << minval(root) -> data << endl;
    cout << "Max Value is " << maxval(root) -> data << endl;
    //DEETION
    root = deleteFromBST(root , 50);

    cout << " Printing the BST " << endl;
    levelOrderTraversal(root);

    cout << "Printing InOrder" << endl;
    inorder(root);
    cout << endl << "Printing PreOrder" << endl;
    preorder(root);
    cout << endl << "Printing PostOrder" << endl;
    postorder(root);
    cout << endl;

    cout << "Min Value is " << minval(root) -> data << endl;
    cout << "Max Value is " << maxval(root) -> data << endl;

    return 0;




=======
#include<iostream>
#include<queue>
using namespace std;

class Node {

    public:
        int data;
        Node* left;
        Node* right;

        Node (int d) {
            this -> data = d;
            this -> left = nullptr;
            this -> right = nullptr;
        }
};

void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
Node* insertIntoBST(Node* root , int d) {
    // base case
    if(root == nullptr) {
        root = new Node(d);
        return root;
    }

    if(d > root -> data) {
        //right part m insert krna haii:
        root -> right = insertIntoBST(root -> right , d);
    }
    else {
        //left part m insert krna hai:
        root -> left = insertIntoBST(root -> left , d);
    }
    return root;
}

Node* minval(Node* root) {
    Node* temp = root;
    while(temp -> left != nullptr) {
        temp = temp -> left;
    }
    return temp;
}

Node* maxval(Node* root) {
    Node* temp = root;
    while(temp -> right != nullptr) {
        temp = temp -> right;
    }
    return temp;
}
Node* deleteFromBST(Node* root , int val) {
    // base case
    if(root == nullptr) 
         return root;

    if(root -> data == val) {
        //0 child
        if(root -> left == nullptr && root -> right == nullptr) {
            delete root;
            return nullptr;
        }

        //1child

        //left child
        if(root -> left != nullptr && root -> right == nullptr) {
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        //right child
        if(root -> left == nullptr && root -> right != nullptr) {
            Node* temp = root -> right;
            delete root;
            return temp;
        }

        //2child
        if(root -> left != nullptr && root -> right != nullptr) {
            int mini = minval(root -> right) -> data;
            root -> data = mini;
            root -> right = deleteFromBST(root -> right , mini);
            return root;
        }
    }    
    else if(root -> data > val) {
        root -> left = deleteFromBST(root -> left , val);
        return root;
    }
    else {
        root -> right = deleteFromBST(root -> right , val);
        return root;
    }
}
void takeInput(Node* &root) {
    int data;
    cin>> data;

    while(data != -1) {
        root = insertIntoBST(root , data);
        cin>> data;
    }

}
int main() {
    Node* root = nullptr;

    cout << "Enter data to create a BST: " << endl;
    takeInput(root);

    cout << " Printing the BST " << endl;
    levelOrderTraversal(root);

    cout << "Printing InOrder" << endl;
    inorder(root);
    cout << endl << "Printing PreOrder" << endl;
    preorder(root);
    cout << endl << "Printing PostOrder" << endl;
    postorder(root);
    cout << endl;

    cout << "Min Value is " << minval(root) -> data << endl;
    cout << "Max Value is " << maxval(root) -> data << endl;
    //DEETION
    root = deleteFromBST(root , 50);

    cout << " Printing the BST " << endl;
    levelOrderTraversal(root);

    cout << "Printing InOrder" << endl;
    inorder(root);
    cout << endl << "Printing PreOrder" << endl;
    preorder(root);
    cout << endl << "Printing PostOrder" << endl;
    postorder(root);
    cout << endl;

    cout << "Min Value is " << minval(root) -> data << endl;
    cout << "Max Value is " << maxval(root) -> data << endl;

    return 0;




>>>>>>> 4fd8956 (files)
}