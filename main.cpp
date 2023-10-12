#include <iostream>
#include <vector>
#include <algorithm>
#include "AVLTree.h"
using namespace std;
int main() {
    std::vector<int> ascending, descending, random;

    // Fill the sequences with odd numbers between 1-100
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 1) {
            ascending.push_back(i);
            descending.push_back(i);
            random.push_back(i);
        }
    }

    // Create AVL trees and insert sequences
    AVLTree<int> avlAscending, avlDescending, avlRandom;

    for (const auto& value : ascending) 
    {
        avlAscending.insert(value);
    }

    for (const auto& value : descending)
    {
        avlDescending.insert(value);
    }

    std::random_shuffle(random.begin(), random.end());
    for (const auto& value : random) 
    {
        avlRandom.insert(value);
    }

    // Print heights
    cout << "Height of AVL Tree (Ascending): " << avlAscending.height() << endl;
    cout << "Height of AVL Tree (Descending): " << avlDescending.height() << endl;
    cout << "Height of AVL Tree (Random): " << avlRandom.height() << endl;

    // Print validation results
    cout << "Validation (Ascending): " << avlAscending.validate() << endl;
    cout << "Validation (Descending): " << avlDescending.validate() << endl;
    cout << "Validation (Random): " << avlRandom.validate() << endl;

    // Check contains function
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 1 && avlAscending.contains(i) != 1) {
            cout << "My AVL tree implementation is wrong (Ascending)" << endl;
        }
        else if (i % 2 == 0 && avlAscending.contains(i) != 0) {
            cout << "My AVL tree implementation is wrong (Ascending)" << endl;
        }


        if (i % 2 == 1 && avlDescending.contains(i) != 1) {
            cout << "My AVL tree implementation is wrong (Descending)" << endl;
        }
        else if (i % 2 == 0 && avlDescending.contains(i) != 0) {
            cout << "My AVL tree implementation is wrong (Descending)" << endl;
        }


        if (i % 2 == 1 && avlRandom.contains(i) != 1) {
            cout << "My AVL tree implementation is wrong (Random)" << endl;
        }
        else if (i % 2 == 0 && avlRandom.contains(i) != 0) {
            cout << "My AVL tree implementation is wrong (Random)" << endl;
        }

    }

    return 0;
}
