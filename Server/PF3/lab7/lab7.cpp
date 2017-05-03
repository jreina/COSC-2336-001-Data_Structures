#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class node {
  public:
    int key;
    string value;

    node *left;
    node *right;

    node(int k, string v)
    {
        key = k;
        value = v;

        left = NULL;
        right = NULL;
    }
};


class bst {
  private:
    node *root;
    void _dumpf(node* node, int level)
    {
        cout << endl << "key: " << node->key << ", value: " << node->value << ", level: " << level << endl;
        if(node->left) cout << "left key: " << node->left->key << endl;
        if(node->right) cout << "right key: " << node->right->key << endl;

        if(node->left) _dumpf(node->left, level + 1);
        if(node->right) _dumpf(node->right, level + 1);
    }

    void _dumpr(node* node, int level)
    {
        if(node->right) _dumpr(node->right, level + 1);
        if(node->left) _dumpr(node->left, level + 1);
        cout << "key: " << node->key << ", value: " << node->value << endl;

        if(node->left) cout << "left key: " << node->left->key << endl;
        if(node->right) cout << "right key: " << node->right->key << endl;

    }

    string _getr(node* node, int key)
    {
        if(node->key == key) return node->value;
        if(key < node->key && node->left) return _getr(node->left, key);
        if(key > node->key && node->right) return _getr(node->right, key);
        else return "";
    }

  public:
    bst()
    {
        root = NULL;
    }

    void put(int key, string value)
    {
        node *nptr = new node(key, value);
        if(!root) {
            root = nptr;
            return;
        }
        node *tptr = root;
        while(true)
        {
            // Traverse right
            if(key > tptr->key)
            {
                if(tptr->right)
                {
                    tptr = tptr->right;
                }
                else {
                    tptr->right = nptr;
                    break;
                }
            }
            // Traverse left
            else if(key < tptr->key)
            {
                if(tptr->left)
                {
                    tptr = tptr->left;
                }
                else {
                    tptr->left = nptr;
                    break;
                }
            }
            // Found matching key
            else if(key == tptr->key)
            {
                tptr->value = value;
            }
        }
    }

    void remove(int key)
    {
        node *lagptr = root;
        node *tptr = root;

        // Find the node to be removed from the tree
        while(key != tptr->key)
        {
            if(key < tptr->key && tptr->left) {
                lagptr=tptr;
                tptr=tptr->left;
            }
            else if(key > tptr->key && tptr->right) {
                lagptr=tptr;
                tptr=tptr->right;
            }
            else return; // Key isn't in tree.
        }
        // Removing a node with left and right node
        if(tptr->left && tptr->right)
        {
            // Go left, then make a right...
            node *lagreplacement = tptr;
            node *replacementnode = tptr->left;
            while(replacementnode->right) {
                lagreplacement = replacementnode;
                replacementnode=replacementnode->right;
            }

            // replacementnode is the largest in the left subtree now
            // replacementnode can have 0-1 children

            // No children
            if(!replacementnode->left && !replacementnode->right)
            {
                if(replacementnode->key > lagreplacement->key) lagreplacement->right=NULL;
                else if(replacementnode->key < lagreplacement->key) lagreplacement->left=NULL;
                tptr->value=replacementnode->value;
                tptr->key=replacementnode->key;
                delete replacementnode;
            }
            // Left child only
            if(replacementnode->left)
            {
                tptr->value=replacementnode->value;
                tptr->key=replacementnode->key;
                lagreplacement->right=replacementnode->left;
                delete replacementnode;
            }
        }
        // Removing a node with only left node
        else if(tptr->left)
        {
            if(lagptr->key > tptr->key) lagptr->left=tptr->left;
            if(lagptr->key < tptr->key) lagptr->right=tptr->left;
            delete tptr;
        }
        // Removing a node with only right node
        else if(tptr->right)
        {
            if(lagptr->key > tptr->key) lagptr->left=tptr->right;
            if(lagptr->key < tptr->key) lagptr->right=tptr->right;
            delete tptr;
        }
        // Removing a node with no children
        else {
            cout << "Removing node with no children" << endl;
            if(lagptr->key > tptr->key) lagptr->left=NULL;
            if(lagptr->key < tptr->key) lagptr->right=NULL;
            delete tptr;
        }
    }

    void dump()
    {
        if(root) _dumpf(root, 1);
        else { cout << "ERROR: No root node!" << endl; }
    }

    void dump_rev()
    {
        if(root) _dumpr(root, 1);
        else { cout << "ERROR: No root node!" << endl; }
    }

    string non_recursive_get(int key)
    {
        if(!root) return "";
        node *tptr = root;
        while(key != tptr->key)
        {
            if(key < tptr->key && tptr->left) tptr=tptr->left;
            else if(key > tptr->key && tptr->right) tptr=tptr->right;
            else break;
        }
        if(key==tptr->key)return tptr->value;
        else return "";
    }

    string recursive_get(int key)
    {
        if(!root) return "";
        else return _getr(root, key);
    }
};


int main(void)
{
    bst mybst;

    string cmd;
    int k;
    string v;

    while (cin >> cmd >> k >> v) {

        cout << "MAIN: cmd= " << cmd << ", key= " << k << ", v= " << v << endl;

        if (cmd == "put") {
            mybst.put(k, v);
        } else if (cmd == "dump") {     // traverse tree in ascending order
            mybst.dump();
        } else if (cmd == "dump_rev") { // traverse tree in descending order
            mybst.dump_rev();
        } else if (cmd == "get") {
            cout << "MAIN: get returns: " << mybst.non_recursive_get(k) << endl;
        } else if (cmd == "rget") {
            cout << "MAIN: rget returns: " << mybst.recursive_get(k) << endl;
        } else if (cmd == "rem") {
            mybst.remove(k);
        } else if (cmd == "quit") {
            exit(0);
        }
    }
}


