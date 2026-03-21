// this is a brute force approach using temp array with tc =n and sc=n
#include <bits/stdc++.h>
#include <algorithm>

int main(){
    // take input 
    int size;
    std::cout<<"Enter size of array:";
    std::cin>>size;
    int array[size];

    std::cout<<"Enter elements of array\n";
    for(int i=0;i<size;i++){
        std::cout<<"array["<<i<<"]:";
        std::cin>>array[i];
    }
    
    int temp[size];
    int j=0;
    for(int i=0;i<size;i++){
        if(array[i]!=0){
            temp[j]=array[i];
            j++;
        }
    }
    for(int k=0;k<j;k++){
        array[k]=temp[k];
    }
    for(int l=j;l<size;l++){
        array[l]=0;
    }
    
    // show results
    for(int k=0;k<size;k++){
        std::cout<<array[k]<<",";
    }
    return 0;
}