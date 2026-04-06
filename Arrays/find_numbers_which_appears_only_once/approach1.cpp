//in an array we will have numbers which appears twice and a number which appears only once find out that number
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
    // we itterate array and check each number if it appears atleast twice or not
    int number;
    int appears_twice=0;

    for(int i =0;i<size;i++){
        number=array[i];
        for(int j=0;j<size;j++){
            if(j==i){
                continue; // to skip the occurance we are taking
            }
            else if(array[i]==array[j]){
                appears_twice=1;
                break;
            }
        }
        if(appears_twice==0){
            std::cout<<array[i]<<" appears only once.\n";
        }
        appears_twice=0;
        
    }

    return 0;
}