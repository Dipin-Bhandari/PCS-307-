#include<iostream>  
using namespace std;    
void swap(int *x, int *y)  
{  
 int swap;  
 swap=*x;  
 *x=*y;  
 *y=swap;  
}  
int main()   
{    
 int x=20, y=60;    
 puts("Before swapping");
cout<<"Value of x is: "<<x<<endl;  
cout<<"Value of y is: "<<y<<endl;  
 swap(&x, &y);  

 puts("After Swapping ");
cout<<"Value of x is: "<<x<<endl;  
 cout<<"Value of y is: "<<y<<endl;  
 return 0;  
}    