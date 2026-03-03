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
    int slargest;
    int largest=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>largest){
            slargest=largest;
            largest=array[i];
        }
        else if(array[i]>slargest){
            slargest=array[i];
        }
    }
    std::cout<<"second largest element in arrray is: "<<slargest;
    return 0;

}