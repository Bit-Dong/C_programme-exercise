#include <iostream>
using namespace std;

typedef union  
{ 
	long i;  
	char k[13]; 
    char c; 
} DATE; 
struct data 
{ 
    int cat; 
    DATE cow;  
	double dog; 
} too;   


int main()
{
	DATE max; 
    cout<<sizeof(struct data)<<endl<<sizeof(max);
    return 0;
}


