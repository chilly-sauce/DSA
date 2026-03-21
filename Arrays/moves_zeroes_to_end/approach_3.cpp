// this approach has tc=n and order remains same


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
    
    // use 2 pointer let p1 for non 0 index and p2 itterate
    int p1=0;
    int p2=0;
    while(p2<size){
        if(array[p2]!=0){
            std::swap(array[p1],array[p2]);
            p1++; // p1 only increases when we put a non zero element at p1 index
        }
        p2++;
    }
    
    
    // show results
    for(int k=0;k<size;k++){
        std::cout<<array[k]<<",";
    }
    return 0;
}