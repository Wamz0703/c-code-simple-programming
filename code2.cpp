#include <iostream>
int fibonacci(int n){
    if(n == 0)
    return 0;
    else if(n ==1)
    
    return 1;
    else
    return(fibonacci(n - 1) + fibonacci(n - 2) );
}
int main(){
    int n;
    std::cout <<"Enter the value of n: ";
    std::cin >> n;
    std::cout << "The " << n << "th fibonacci number is: " << fibonacci(n - 1)<<"\n";
   
    return 0;
}