#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

linked_list* create_linked_list(){
    linked_list* l_list = (linked_list* )malloc(sizeof(linked_list));
    if(l_list == NULL){
        printf("Memory not allocated using malloc.\n");
        exit(1);
    }else{
        l_list->head_node == NULL;
        return l_list;
    }
    
}

void delete_linked_list(linked_list* l_list){
    if(l_list->head_node == NULL){
        free(l_list);
    }else{
        node* temp = l_list->head_node;
        while(1){
            if(temp->next == NULL){
                free(temp);
                break;
            }else{
                node* temp2 = temp;
                temp = temp2->next;
                free(temp2);
                continue;
            }
        }
    }
    free(l_list);
}

node* create_node(const int value){
    node* n = (node* )malloc(sizeof(node));

    if(n == NULL){
        printf("Memory not allocated using malloc.\n");
        exit(1);
    }else{
        n->value = value;
        n->next = NULL;
    }

    return n;
}

void append_node(linked_list* l_list, node* n){
    if(l_list->head_node == NULL){
        l_list->head_node = n;
    }else{
        node* temp = l_list->head_node;
        while(temp->next != NULL){
                temp = temp->next;   
        }
        temp->next = n;
    }
}

void display_nodes(linked_list* l_list){
    if(l_list->head_node == NULL){
        printf("The list is empty\n");
    }else{
        node* temp = l_list->head_node;
        while(1){
            if(temp->next == NULL){
                printf("%d\n", temp->value);
                break;
            }else{
                printf("%d\n", temp->value);
                temp = temp->next;
                continue;
            }
        }
    }
}