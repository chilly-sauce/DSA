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
    // we itterate through array to find largest number and define hash array of size largest+1
    int largest =-1;
    for(int i=0;i<size;i++){
        if(array[i]>largest){
            largest=array[i];
        }
    }
    int hash[largest+1]={0};

    // hash all the elements 
    for(int i=0;i<size;i++){
        hash[array[i]]++;
    }
    int j=0;
    for(int i=0;i<largest+1;i++){
        for(int k=0;k<hash[i];k++){
            array[j]=i;
            j++;
        }
    }

    // showing sorted array
    std::cout<<"sorted array- ";
    for(int i=0;i<size;i++){
        std::cout<< array[i]<<",";
    }

    return 0;
}

// this sorting is fast with tc of n+k , k being the largest number
// but it also have sc of k+1 thats why its not ideal for large numbers