//this method is only to be used when only one no. appear once and all other only twice
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
    int number=array[0];
    for(int i=1;i<size;i++){
        number=number^array[i];
    }
    std::cout<<number<<" appears only once.\n";

    return 0;
}

// tc is n and sc is 1