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
    // we will count each element which has more than n/2 freq is the answer
    int count;
    for(int i=0;i<size;i++){
         count=0;
         for(int j=0;j<size;j++){
            if(array[i]==array[j]){
                count++;
            }
         }
         if(count>size/2){
            std::cout<< array[i] << " is in majority";
            break;
         }
    } 
    
    return 0;
}
// this has time comp of n^2
// sc of 1