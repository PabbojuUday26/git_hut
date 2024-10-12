#include<stdio.h>
#include>stdlib.h>
#define SIZE 10
void push(int)
void pop();
void display();
int stack[SIZE],top=-1;
int main() {
    int choice,value;
    while(1) {
    printf("\n\n\n****MENU****\n\n\n");
    printf("\n\n 1.push \n 2.pop \n 3.display \n 4.exit\n\n");
    printf("Enter the choice : \n");
    scanf("%d",&choice);
    switch(choice) {
        case 1:printf("Enter the value to be inserted : \n");
               scanf("%d",&value);
               push(value);
               break;
        case 2:pop();
               break;
        case 3:display();
              break;
        case 4:exit(0);    
        default : printf("\n\n Wrong Selection!!! try again!!")                
    }
}
}
void push(int value) {
    if(top==SIZE-1) 
    printf("\n\n Stack is full!!! insertion is impossible!!\n\n");
    else {
        top++;
        stack[top]=value;
    printf("\nInsertion is Success!!!\n")
    }
}
void pop()  {
    if(top==-1)
    printf("\n Stack is Empty!!! Deletion is impossible!!\n");
    else {
        printf("Deleted : %d",stack[top]);
        top--;
    }
}
void display() {
    if(top==-1)
    printf("\n Stack is Empty!!!\n");
    else {
        int top;
        printf("\n Stack elements are : \n")
      for(int i=top;i>=0;i--) {
        printf("%d",stack[i]);
      }
    }
}
