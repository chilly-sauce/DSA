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
    int slargest=-1;
    int largest=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>largest){
            largest=array[i];
        }
    }
    for(int i=0;i<size;i++){
        if (array[i]>slargest && largest>array[i]){
            slargest=array[i];
        }
    }
    std::cout<<"second largest element in arrray is: "<<slargest;
    return 0;

}