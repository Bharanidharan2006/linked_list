typedef struct NODE
{
    int value;
    struct NODE* next;
}node;

typedef struct
{
    int size;
    node* head_node;
}linked_list;

//Create and delete linked lists
linked_list* create_linked_list();
void delete_linked_list(linked_list* );
//Display the value of nodes in the list
void display_linked_list(linked_list* );

//Create a node with next = NULL
node* create_node(const int);
//Append to a linked list
void append_node(linked_list* ,node* );
//Insert node at a specific index
void insert_node(const int, linked_list* ,node* );
//Delete head node
void delete_first_node(linked_list* );
//Delete a node at a specific index
void delete_node(const int, linked_list* );

