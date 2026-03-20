#include <bits/stdc++.h>
/* left rotate 
if array is 1,2,3,4,5,
after rotation by one place it becomes 2,3,4,5,1
simply the first element come to last place*/
int main (){
    // take array
    int size;
    std::cout<<"Enter size of array:";
    std::cin>>size;
    int array[size];

    std::cout<<"Enter elements of array\n";
    for(int i=0;i<size;i++){
        std::cout<<"array["<<i<<"]:";
        std::cin>>array[i];
    }
    // store first element in temp 
    int temp=array[0];
    // shift others to left 

    for (int i=0; i<size-1 ;i++){
        array[i]=array[i+1];
    }

    // assign temp to last
    array[size-1]=temp;
    // print result
    for(int k=0;k<size;k++){
        std::cout<<array[k]<<",";
    }

    return 0;
}