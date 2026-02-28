#include <bits/stdc++.h>

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
        //hashing array
            int greatest=0;
            for (int i=0;i<size;i++){
                if (array[i]>greatest){
                greatest=array[i];
                }}

            int hash[greatest+1]={0};
            for(int j=0;j<size;j++){
                hash[array[j]]++;
                }

        switch(order){
            case 1:
                int value;
                int occ;
                std::cout<<"enter value:";
                std::cin>>value;
                if (value<=greatest){
                    occ=hash[value];
                }
                //need else to prevent garbage value
                else{
                    occ=0;
                }
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