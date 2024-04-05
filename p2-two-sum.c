#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int value;
    struct ListNode *next;
};

struct ListNode* InputList();

struct ListNode* Sum(struct ListNode *a, struct ListNode *b);

int main() {
    
    struct ListNode *a, *b, *sum;
    
    printf("ENTER FIRST NUMBER\n");
    a = InputList();

    printf("ENTER SECOND NUMBER\n");
    b = InputList();

    sum = Sum(a,b);
    
    while(sum != NULL){
        printf("%d", sum->value);
        sum = sum->next;
    }

    printf("\n");

    return 0;
}


struct ListNode* InputList() {
    
    struct ListNode *x, *y;
    int n=0;

    while(true){
        
        y = malloc(sizeof(struct ListNode));
        
        printf("Enter Digit: ");
        scanf("%d", &(y->value));
        
        if (y->value<0)
            return x; 

        if (n==0)
            y->next = NULL;
        else
            y->next = x;

        x = y;
        n++;
        
    }
}

struct ListNode* Sum(struct ListNode *a, struct ListNode *b){
    int p, q, add,carry=0,n=0;
    struct ListNode *x, *y;
         
    while (true) {
        (a == NULL) ? (p = 0) : (p = a->value);

        (b == NULL) ? (q = 0) : (q = b->value);

        add = p + q + carry;
        
        if (a==NULL && b==NULL && add==0) {
            y = NULL;
            if (n==0) x = y;
            return x;
        }
        else {
            if( n==0)
                y = malloc(sizeof(struct ListNode));
            else{
                y->next = malloc(sizeof(struct ListNode));
                y = y->next;
            }

            if (n==0) x = y;

            if (add>9) {
                add = add - 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            
            y->value = add;
            
            if (a != NULL) a = a->next;
            if (b != NULL) b = b->next;
            n++;
        }
    }
}
