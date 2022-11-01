#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
//** -> Ponteiro para ponteiro
void insertElementIntoNode(struct Node **start_ref, int data){
    //Declare node with the same struct as node
    //Cast to type and alloc memory
    struct Node *ptr1 = (struct Node*)malloc(sizeof(struct Node));
    ptr1->data=data;
    //Insert at the beginning
    ptr1->next=*start_ref;
    //Transforming original pointer into the pointer+new element
    *start_ref = ptr1;
}

//Function to print elements
void printElementFromNodes(struct Node *start){
    struct Node *temp = start;
    printf("\n");
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

//Function to swap elements
void swapElements(struct Node *firstElement, struct Node *secondElement){
    int temp;
    firstElement->data = temp;
    firstElement->data = secondElement->data;
    secondElement->data = temp;
}

//Function to bubble sort

void bubbleSort(struct Node *start){
    int swapped;
    struct Node *ptr1;
    struct Node *lptr = NULL;
    //Node empty
    if(start == NULL){return;}

    do{
        swapped = 0;
        ptr1 = start;

        while(ptr1->next != lptr){
            if(ptr1->data > ptr1->next->data){
                swapElements(ptr1, ptr1->next);
                swapped=1;
            }
            ptr1 = ptr1->next;
        }
        lptr=ptr1;
    }
    while(swapped);
}


int main(){

    int arr[] = {12,56,2,11,1,90};
    int list_size,i;
    //Create empty node list
    struct Node *start = NULL;
    //Populate list

    for(int i=0; i<6; i++){
        insertElementIntoNode(&start, arr[i]);
    }
    
    printf("Linked list before sorting\n");
    printElementFromNodes(start);

    //Bubble sort
    bubbleSort(start);

    printf("Linked list after sorting\n");
    printElementFromNodes(start);
    return 0;
}