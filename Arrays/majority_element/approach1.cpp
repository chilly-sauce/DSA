// in this we have to find element which appears more than or equal n/2 times
// element should not be equal to zero

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
    int sum; // using basic maths
    for(int i=0;i<size;i++){
        sum=0;
        for(int j=0;j<size;j++){
            if (array[j]==array[i]){
                sum=sum+array[j];
            }
        }
        if(size%2==0){
            if((sum)/(array[i]*(size/2)) >1){
                std::cout<<array[i]<<" is in majority";
                break;
            }
        }
        else if(size%2==1) {
            if((sum)/(array[i]*((size/2))+1) >=1){
                std::cout<<array[i]<<" is in majority";
                break;
        }
        }
    }
    return 0;
}