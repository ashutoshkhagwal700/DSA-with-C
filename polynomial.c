#include<stdio.h>
#include<conio.h>
typedef struct nodetype{
    int coef,powe,power,coeff;
    struct nodetype *next;
}node;

void main(){
    int *ptr1,*ptr2,*ptr3;
    addPolynomial(ptr1,ptr2,ptr3);
}

void addPolynomial(node *ptr1, node *ptr2, node *ptr3){
    int powe;
    float coef;
    while((ptr1!=NULL) && (ptr2!=NULL)){
        if(ptr1->power > ptr2->power){
            coef = ptr1->coeff;
            powe = ptr1->power;
            ptr1 = ptr1->next;
        }
        else if(ptr1->power < ptr2->power){
            coef = ptr2->coeff;
            powe = ptr2->power;
            ptr2 = ptr2->next;
        }
        else{
            coef = ptr1->coeff + ptr2->coeff;
            powe = ptr1->power;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        if(coef!=0)
        addNode(ptr3, coef, powe);
    }
    if(ptr1 == NULL){
        for( ; ptr2!=NULL; ptr2 = ptr2->next)
        addNode(ptr3, ptr2->coeff, ptr2->power);
    }
    else if(ptr2 ==NULL){
        for( ; ptr1!=  NULL; ptr1 = ptr1->next)
        addNode( ptr3, ptr1->coeff, ptr1->power);
    }
}
