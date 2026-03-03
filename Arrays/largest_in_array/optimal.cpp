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
    int largest=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>largest){
            largest=array[i];
        }
    }
    std::cout<<"largest element in arrray is: "<<largest;
    return 0;

}