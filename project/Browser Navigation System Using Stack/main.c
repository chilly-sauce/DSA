#include <stdio.h>
#include <string.h>
#define PAGES 100 // max number of pages
#define URL 50 // max length of url

// struct for stacks//
struct Stack
{
    char pages[PAGES][URL];
    int top;
};


//push fxn 
void push (struct Stack *stack , char current_url[]){
    if(stack->top==PAGES-1){
        printf("Not enough memory.\n"); 
    }
    else{
        stack->top++;
        // copies current url into stack
        strcpy(stack->pages[stack->top], current_url);      
    }
}
// pop fxn
void pop(struct Stack *stack , char destination[]){
    if(stack->top==-1){
        printf("Underflow Condition");
    }
    else{
        // copies value of stack to destination
        strcpy(destination,stack->pages[stack->top]);
        stack->top--;
    }

}


int main(){
    printf("====================================\n");
    printf("          BROWSER SIMULATOR         \n");
    printf("====================================\n");
    // used variables
    int run_again=1; // for do while loop
    char current_url[URL]="HOME"; // starting page
    int cmd; // for switch case commands

    // front and back stack
    struct Stack front_stack;
    front_stack.top=-1;

    struct Stack back_stack;
    back_stack.top=-1;

    // in a loop use switch case to get user command 1- new site ,
    //2-back,3-forward,4-exit
    do{
        printf("--------------MENU--------------\n");
        printf("Enter 1 to visit new site.\n");
        printf("Enter 2 to go backward.\n");
        printf("Enter 3 to go forward.\n");
        printf("Enter 4 to exit.\n");
        printf("--------------------------------\n");
        printf("command : ");
        scanf("%d",&cmd);
        switch(cmd){
            case 1:
                /* case for new
                push current url in back
                clear front stack
                take input for new url*/

                push (&back_stack,current_url); //pushes current url in back stack
                front_stack.top=-1; // clears the front stack as when we search new page all pages in forward stack clean up
                printf("Enter url of site : ");
                scanf("%s",current_url); // take input for new url
                break;

                
            case 2:
                /* case for back
                push current url to front
                url=pop(back stack)*/

                if(back_stack.top==-1){
                    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * *\n ");
                    printf("You are already on first site.");
                    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * *\n ");
                } // this condition means we are already at 1st page.
                else{
                    push(&front_stack,current_url); // we push current url into front stack
                    pop(& back_stack,current_url); // then pop and store value from back stack into current url
                }
                break;
                
            case 3:
                /*case for forward
                push current url to back
                url=pop(front)*/

                if(front_stack.top==-1){
                    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * *\n ");
                    printf("You are already on the last site.");
                    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * *\n ");
                }// this condition means we are already at last page
                else{
                    push(&back_stack,current_url);//pushing current url into back stack
                    pop(&front_stack,current_url);// poping and storing value from front stack into current url
                }
                break;

            case 4:
                run_again=0;
                printf("====================================\n");
                printf("              THANK YOU             \n");
                printf("====================================\n");
                break;

            default:
                printf("Invalid Input.\n");
                break;
        }
        if(run_again){
            printf("\n* * * * * * * * * * * * * * * * * * * * * * * * *\n ");
            printf("You are currently on: %s",current_url);
            printf("\n* * * * * * * * * * * * * * * * * * * * * * * * *\n ");  

        }
    } while(run_again);

    return 0;
}