#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int i;  
    for(i = 1; i <= 3; i++)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        if(newNode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        newNode->data = i * 10;
        newNode->next = NULL;
        if(head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}

