// to find max no. of consecutive ones in array
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

    // define max from 0 and current from 0
    int max=0,current=0;

    // itterate if array[i]=1 increment to current 
    for(int i=0;i<size;i++){
        if(array[i]==1){
            current++;
        }
    // if element is non 1 check is current is greater than max 
    // if yes store it in max and assign current again 0
    // else assign current 0
    if (current> max){
            max=current;
        }
    else{
        current=0;
    }
    }
    std::cout<<"max consecutive ones in array is "<<max;
    return 0;
}