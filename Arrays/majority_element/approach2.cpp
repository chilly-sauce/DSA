// hash map
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
    
    int largest=0;
    for(int i=0;i<size;i++){
        if(array[i]>largest){
            largest=array[i];
        }
    }

    int hash[largest+1]={0};
    for(int i=0;i<size;i++){
        hash[array[i]]++;
    }

    int most=0;
    for(int i=0;i<largest+1;i++){
        if(hash[most]<hash[i]){
            most=i;
        }
    }

    std::cout<< most << " is in the majority";
       
    
    return 0;
}

// sc of largest and tc of n+largest
// good if range of numbers is small