#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

linked_list* create_linked_list(){
    linked_list* l_list = (linked_list* )malloc(sizeof(linked_list));
    if(l_list == NULL){
        printf("Memory not allocated using malloc.\n");
        exit(1);
    }else{
        l_list->size = 0;
        l_list->head_node = NULL;
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

void display_linked_list(linked_list* l_list){
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
    printf("The size of the list is: %d", l_list->size);
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
        l_list->size++;
    }else{
        node* temp = l_list->head_node;
        while(temp->next != NULL){
                temp = temp->next;   
        }
        temp->next = n;
        l_list->size++;
    }
}

void insert_node(const int i, linked_list* l_list, node* n){
    if(l_list->size == 0){
        append_node(l_list, n);
        return;
    }
    else if(i <= (l_list->size-1)){
        node* prev = NULL;
        node* curr = l_list->head_node;
        if(i == 0){
            n->next = curr;
            l_list->head_node = n; 
            l_list->size++;
        }else{
            for(int j=1; j <= i;j++){
                prev = curr;
                curr = curr->next;
            }
            n->next = curr;
            prev->next = n;
            l_list->size++;
        }
    }else{
        printf("\nThe index is not available.List is small\n");
        return;
    }
}


void delete_first_node(linked_list* l_list){
    if(l_list->size == 0){
        printf("\nThere is nothing to delete. List is empty\n");
    }else if(l_list->size == 1){
        node* temp = l_list->head_node;
        l_list->head_node = NULL;
        free(temp);
        l_list->size--;
    }
    else{
        node* temp = l_list->head_node;
        l_list->head_node = temp->next;
        free(temp);
        l_list->size--;
    }
}

void delete_node(const int i, linked_list* l_list){
    if(l_list->size == 0){
        printf("\nThere is nothing to delete. List is empty\n");
    }
    else if(i <= (l_list->size - 1)){
        node* prev = NULL;
        node* curr = l_list->head_node;
        if(i==0){
            delete_first_node(l_list);
        }else{
            for(int j=1; j <= i; j++){
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            free(curr);
            l_list->size--;
        }
        
    }else{
        printf("\nThe index is not available.List is small\n");
        return;
    }
}

