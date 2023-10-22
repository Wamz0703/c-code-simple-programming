#include <iostream>
using namespace std;
void addditionfunction(){
    double x;
    cout<<"Enter x: ";
    cin>> x ;
    cout <<endl;
    double y;
    cout<<"Enter y: ";
    cin >> y;
    cout <<endl;
    double sum = x + y;
    cout << "THE SUM IS: "<<sum <<endl;
    
}
void subtractionfunction(){
    double x;
    cout<<"Enter x: ";
    cin>> x ;
    cout<<endl;
    double y;
    cout<<"Enter y: ";
    cin>> y ;
    cout<<endl;
    double Difference = x - y;
    cout << "the Difference is: "<< Difference<<endl;
}
int main(){
    int choice;
    cout<<"Enter 1 for additionfunction and 2 for subtractionfunction: ";
    cin>>choice;
    if(choice == 1){
        addditionfunction();
    }
    else if(choice == 2){
        subtractionfunction();
    }
    else{
        cout <<"invalid entry\n";
    }
}