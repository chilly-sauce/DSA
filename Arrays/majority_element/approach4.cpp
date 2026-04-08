// moorse voting algorithm
// will give a number which will be the majority one if only there exists a majority
#include<iostream>

int main(){
// take input of array
    int size;
    std::cout<<"Input size of array:";
    std::cin>>size;

    int array[size];
    for(int i=0;i<size;i++){
        std::cout<< "array["<<i<<"]:";
        std::cin>>array[i];
    }
    int el=array[0];
    int count =0;
    for(int j=0;j<size;j++){
        if(count==0){
            el=array[j];
            count++;
        }
        if (el==array[j]){
            count++;
        }
        else{
            count--;
        }
        
    }

    // check the element for majority
    count=0;
    for(int i=0;i<size;i++){
        if(array[i]==el){
            count++;
        }
    }
    if(count>size/2){
        std::cout<< el <<" is in majority.\n";
    }
    else{
        std::cout<<"No element is in majority.\n";
    }

    return 0;
} 

// sc of 1 and tc of n