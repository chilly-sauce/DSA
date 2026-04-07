// to sort array containing only 0,1,2
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
    // we count no. of 0,1 and 2;
    int zeroes=0,ones=0,twos=0;
    for(int i=0;i<size;i++){
        if (array[i]==0){
            zeroes++;
        }
        if (array[i]==1){
            ones++;
        }
        if (array[i]==2){
            twos++;
        }
    }

    // assign in array
    int index=0;
    // assigning zeroes
    for(int j=0;j<zeroes;j++){
        array[index]=0;
        index++;
    }
    //assigning one
    for(int j=0;j<ones;j++){
        array[index]=1;
        index++;
    }

    // assigning two
    for(int j=0;j<twos;j++){
        array[index]=2;
        index++;
    }
    

    // showing sorted array
    std::cout<<"sorted array- ";
    for(int i=0;i<size;i++){
        std::cout<< array[i]<<",";
    }

    return 0;
}

// tc is n and sc is 3 it uses a bit of space can be called special case of count sort