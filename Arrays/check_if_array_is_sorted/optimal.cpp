#include <bits/stdc++.h>
int main(){
    int size;
    std::cout<<"Enter size of array:";
    std::cin>>size;
    int array[size];

    std::cout<<"Enter elements of array\n";
    for(int i=0;i<size;i++){
        std::cout<<"array["<<i<<"]:";
        std::cin>>array[i];
    }
    int is_sorted=1;
    for(int i=0;i<size-1;i++){
        if(array[i]>array[i+1]){
            is_sorted=0;
            std::cout<<"Array is unsorted\n";
            return 0;
        }
    }
    std::cout<<"Array is sorted\n";
    return 0;

}