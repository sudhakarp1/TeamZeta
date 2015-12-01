#include <iostream>
using namespace std;


class Array
{
    
   
int size;
   
int *arr;
  
public:

Array()
{
    arr=0;
    size=0;
}
    
Array(int ss)
    
{
        
size=ss;
        
arr=new int[size];
        
  
  
}
    
    

void add(int n)
    
{
        
cout<<"array elements are:"<<endl;
        
int j=n;
        
for(int i=0;i<size;i++)
        
{
         

            
arr[i]=j;
            
j++;
        
    
}
   
}

   

void addNext(int a)
    
{
   int i; 
      
int *ptr=new int[size+1];
        
for(i=0;i<size;i++)
        
{
           
ptr[i]=arr[i];
                            
}

                 
ptr[i]=a;
                
if(arr!=NULL)
                        
delete[] arr;
                 
arr=ptr;
    
}




void disp()

{

for(int i=0;i<=size;i++)

{
cout<<arr[i]<<endl;
}

}

Array(const Array & obj);

~Array()
{
cout<<"destructor called";
if(arr!=NULL)
delete [] arr;
}

};

Array::Array(const Array & obj)
{
size=obj.size;
    arr=new int[size];
    for(int i=0;i<size;i++)
    arr[i]=obj.arr[i];
}

int main()

{
    
Array aa(10);

aa.add(60);

aa.addNext(56);

//aa.disp();
Array pp(11);

pp=aa;
pp.disp();

return 0;

}


