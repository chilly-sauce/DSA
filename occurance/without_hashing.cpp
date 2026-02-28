#include <bits/stdc++.h>
// this fxn checks each element one by one and as it finds equality it 
//increments the counter
int find_occurance(int array[],int size,int value){
    int counter=0;
    for(int i=0;i<size;i++){
        if (array[i]==value){
            counter++;
        }
    }
    return counter;
}

int main(){
    // taking size of array
    std::cout<<"*****************\n";
    std::cout<<"*****WELCOME*****\n";
    int size;
    std::cout<<"Enter size of array:";
    std::cin>>size;
    int array[size];
//taking input in array
    for (int i=0;i<size;i++){
        std::cout<<"Enter A["<< i<<"]:";
        std::cin>>array[i];
    }
// taking orders from user
    int t=1;
    do{
        int order;
        std::cout<<"Enter 1 to find occurance\nEnter 2 to exit\n ";
        std::cin>>order;
        switch(order){
            case 1:
                int value;
                int occ;
                std::cout<<"enter value:";
                std::cin>>value;
                occ=find_occurance(array,size,value);
                std::cout<<"the number "<< value<<" occurs "<<occ<<" times.\n";
               break; 
            case 2:
                t=0;//this will break the loop
                break;
            default:
            std::cout<<"Invalid Input.";

        }

    }while(t);
    std::cout<<"****THANK YOU****\n";
    std::cout<<"*****************\n";
    return 0;
}