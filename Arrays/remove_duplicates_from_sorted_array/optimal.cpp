#include <bits/stdc++.h>

int main(){
    int size;
    std::cout<<"Enter size of array:";
    std::cin>>size;
    int array[size];

    std::cout<<"Enter elements of array(Sorted)\n";
    for(int i=0;i<size;i++){
        std::cout<<"array["<<i<<"]:";
        std::cin>>array[i];
    }

    int final_size=size;
    for (int i =0;i<size-1;i++){
        if (array[i]==array[i+1]){
            array[i+1]=array[i+2];
            final_size--;
        }
    }
    
    
    for(int k=0;k<final_size;k++){
        std::cout<<array[k]<<",";
    }
    return 0;

}