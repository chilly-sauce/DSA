# include <iostream>
/* you will be given n-1 numbers from 1 to n and have to find one missing number*/
int main(){
    //take input of n and numbers
    int n;
    std::cout<<"Enter the n: ";
    std::cin>>n;
    
    int array[n-1];

    for(int i=0;i<n-1;i++){
        std::cout << "enter element"<<i+1<<":";
        std::cin>>array[i];
    }

    // find the sum of all elements (1 to n) as sum_ideal
    int sum_ideal=(n*(n+1))/2;

    // find sumof numbers present as sum_actual
    int sum_actual=0;
    for(int i=0;i<n-1;i++){
        sum_actual=sum_actual+array[i];
    }

    // missing number = sum_ideal - sum_actual
    int missing_number = sum_ideal - sum_actual;

    std::cout<<"Missing number is :"<<missing_number;
    return 0;
}
// this has tc of O(n)