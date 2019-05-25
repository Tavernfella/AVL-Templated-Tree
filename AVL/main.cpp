#include <cstdlib>
#include <ctime>
#include "AVLTree.h"
using namespace std;
 
 
int main(int argc, char** argv)
{
    srand(static_cast<unsigned int>(time(0)));  
    
    int size = 16;
    AVLTree<int>* tree=new AVLTree<int>();

    cout << "Randomly populate the AVL Tree with two-digit integers. " << endl;

    for(int i=0; i<size; i++)
    {
        tree->insert(rand()%90 + 10);
    }

    cout << "Pre-order traversal:" << endl;
    tree->preOrder();

    cout << endl << "In-order traversal: " << endl;
    tree->inOrder();

    cout << endl << "Post-order traversal: " << endl;
    tree->postOrder();
    
    cout << endl << "Print breadth first: " << endl;
    tree->prntBFS();
    
    cout << endl << endl;
    cout << "Displaying the tree's properties: " << endl;    
    cout << "height = " << tree->height() << endl;
    cout << "min =  " << tree->minimum() << endl;
    cout << "max =  " << tree->maximum() << endl;
    cout << "Printing the tree" << endl;
    tree->print();
    cout << endl;

    int num;
    cout << "Enter an integer to remove from the tree: ";
    cin >> num;
    tree->remove(num);
    
    cout << num << " has been removed. " << endl << endl;;
    tree->postOrder();

    tree->destroy();

    return 0;
}