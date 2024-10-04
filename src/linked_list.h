typedef struct NODE
{
    int value;
    struct NODE* next;
}node;

typedef struct
{
    node* head_node;
}linked_list;

//Create and delete linked lists
linked_list* create_linked_list();
void delete_linked_list(linked_list* );
//Display the value of nodes in the list
void display_nodes(linked_list* );

//Create a node with next = NULL
node* create_node(const int);
//Append to a linked list
void append_node(linked_list* ,node* );

