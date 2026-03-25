# include <iostream>
/* you will be given n-1 numbers from 1 to n and have to find one missing number*/
int main(){
    //take input of n and numbers
    int n;
    int missing_number;
    std::cout<<"Enter the n: ";
    std::cin>>n;
    
    int array[n-1];

    for(int i=0;i<n-1;i++){
        std::cout << "enter element"<<i+1<<":";
        std::cin>>array[i];
    }

   // hash array of n+1 size
    int hash [n]={0};
    for(int i=0;i<n-1;i++){
        hash[array[i]]++;    
   }
   // searchig for hash index with zero value
    
    for(int i=1;i<n-1;i++){
        if(hash[i]==0){
            missing_number=i;
            break;
    }
   }

    std::cout<<"Missing number is :"<<missing_number;
    return 0;
}
// this has tc of O(n) and sc of O(n)