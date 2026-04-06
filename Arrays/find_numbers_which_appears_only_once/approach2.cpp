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

    // itterate and find the once which appears once
    for(int i =0;i<largest+1;i++){
        if(hash[i]==1){
            std::cout<<i<< " appears only once.\n";
        }
    }
    return 0;
}

// this method has time complexity of n but its not a good way if we have a large number as it will use unnecesary space
// also it has space complexity of largest+1
// not good for negative integers