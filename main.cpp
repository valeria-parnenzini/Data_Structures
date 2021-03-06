#include "binary_search_tree.h"
#include "list_t.h"
#include <iostream>

int main() {

    // Example for using the data structure binary_search_tree

    custom_stl::binary_search_tree<int> bst;
    bst.insert_node(5);
    if (bst.find_node(5)) {
        std::cout << "BST properly implemented!" << std::endl;
    }

   // Calling some methods for the data structure list_t  
  
    custom_stl::list_t<int> l4;

    l4.push_back(1);
    l4.size();
    l4.back();

    l4.push_back(2);

    l4.push_back(3);
    l4.back();

    std::cout << "Size of the list: " << l4.size() << std::endl;

    custom_stl::list_t<int> l;

    for (int i = 2; i <= 5; i++) {
        l.push_back(2);
        std::cout << "The last element in the list is " << l.back() << std::endl; 
    }

    auto it = l.insert(l.begin(), 1);
    std::cout << "Inserting a new element: " << *it << std::endl;
    std::cout << "Front element: " << l.front() << std::endl;
    it = l.insert(l.end(), 10);
    std::cout << "Back element: " << l.back() << std::endl;
    for (it = l.begin(); it != l.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    it = l.insert(l.end(), 11);
    std::cout << l.back() << std::endl;
    for (it = l.begin(); it != l.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

}