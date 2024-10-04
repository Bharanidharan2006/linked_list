#include <stdio.h>
#include "linked_list.h"

int main(void){
    //Creating linked list
    linked_list* l_list = create_linked_list();
    //Creating a node and appending it to l_list
    // node* n1 = create_node(1);
    // node* n2 = create_node(2);
    // node* n3 = create_node(3);
    // node* n4 = create_node(4);
    node* n5 = create_node(0);
    node* n6 = create_node(0);
    // append_node(l_list, n1);
    // append_node(l_list, n2);
    // append_node(l_list, n3);
    // append_node(l_list, n4);
    //Inserting nodes
    insert_node(0, l_list, n5);
    insert_node(2, l_list, n6);
    //Delete first node
    // delete_first_node(l_list);
    // delete_first_node(l_list);
    // delete_node(1,l_list);
    // delete_node(4, l_list);
    // //Displaying the list
    display_linked_list(l_list);
    //Deleting linked list
    delete_linked_list(l_list);
    return 0;
}