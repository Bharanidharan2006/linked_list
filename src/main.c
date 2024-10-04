#include <stdio.h>
#include "linked_list.h"

int main(void){
    //Creating linked list
    linked_list* l_list = create_linked_list();
    //Creating a node and appending it to l_list
    node* n1 = create_node(1);
    // node* n2 = create_node(2);
    // node* n3 = create_node(3);
    append_node(l_list, n1);
    // append_node(l_list, n2);
    // append_node(l_list, n3);
    // //Displaying the list
    // display_nodes(l_list);
    //Deleting linked list
    delete_linked_list(l_list);
    return 0;
}