#include<iostream>

using namespace std;
void print(void* ptr, char type);

void intro()
{
    int F = 10;
    cout<<"\'F\' holds value : " << F << " at Address : " <<&F
        <<endl<<endl;

    int * ptr = &F;

    cout<< ptr <<endl<<endl;
    cout<< *ptr <<endl<<endl;

    *ptr = 100;

    cout<< F <<endl<<endl;
    cout<< *ptr <<endl<<endl;

}

void void_pointer()
{
    // a void pointer can hold data of any datatype
    int n = 5;
    char c = 'a';
    float f = 3.7;
    double d = 7.989883;

    print(&n,'i');
    print(&c,'c');
    print(&f,'f');
    print(&d,'d');

}

void print(void* ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout<<(*(int*)ptr)<<endl;
        break;
    case 'c':
        cout<<(*(char*)ptr)<<endl;
        break;
    case 'f':
        cout<<(*(float*)ptr)<<endl;
        break;
    case 'd':
        cout<<(*(double*)ptr)<<endl;
        break;
    
    default:
        break;
    }
}

void array_pointer()
{
    int n[13]={0,1,2,3,4,5,6,7,8,9,0,1,2};

    cout<<n<<endl;
    cout<<&n[0]<<endl;
    cout<<n[2]<<endl;
    cout<<*(n+2)<<endl;

}
 
void getminmax(int num[], int len,int* min,int* max)
{
    *min = num[0];
    *max = num[0];

    for(int i =0; i<len; i++)
    {

        if(*min>num[i])
            *min = num[i];
        
        if(*max<num[i])
            *max = num[i];


    }

}

void multiple_value_pointer_return()
{
    int num[] = {1,2,3,4,-2,1,3,13};
    int len = sizeof(num)/sizeof(int);

    int min = 0,max = 0;

    getminmax(num,len,&min,&max);
    cout<<"Min value from the array : "<<min<<endl;
    cout<<"Max value from the array : "<<max<<endl;
        
}

void dynamic_allocated_array()
{
    int size;
    cout<<"Enter the size : ";
    cin>>size;

    int* myarray = new int[size]; // while dynamically allocating memory
                                  // always delete it after use
    for(int i =0; i<size; i++)
    {
        cout<<"Array["<<i<<"] : ";
        cin>>myarray[i];
    }

    for(int i =0; i<size; i++)
    {
        cout<<*(myarray+i)<<"\t";
        cout<<myarray[i]<<"\t";
    }



    delete[]myarray;
    myarray = NULL; //while deleting the memory the pointer still references to the memory address

}

void dynamic_allocated_MULTI_DIM_array()
{
    int rows, cols;

    cout<<"Column : ";
    cin>>cols;

    cout<<"Rows : ";
    cin>>rows;

    int ** table = new int*[rows]; // ** is used because table is pointing to a pointer ie pointer of pointer

    for(int i = 0; i<rows; i++) // table holds the address of the pointers that refers to each row of the array
        table[i] = new int[cols]; // each row pointer holds the first address of the first location 

    table[1][2] = 100;


    //Deallocating the Memory

    for(int i = 0; i < rows; i++)
        delete[]table[i];//deleting using FILO 

    delete[] table;
    table = NULL;  

}




int main()
{
    intro();

    for(int i = 0;i<50;i++)
        cout<<"-";
    cout<<endl<<endl;
    cout<<"VOID POINTER"<<endl<<endl;

    void_pointer();

    for(int i = 0;i<50;i++)
        cout<<"-";
    cout<<endl<<endl;
    cout<<"Array Pointer"<<endl<<endl;

    array_pointer();

    for(int i = 0;i<50;i++)
        cout<<"-";
    cout<<endl<<endl;
    cout<<"POINTERS TO RETURN MULTIPLE VALUES"<<endl<<endl;

    multiple_value_pointer_return();

    for(int i = 0;i<50;i++)
        cout<<"-";
    cout<<endl<<endl;
    cout<<"DYNAMIC ALLOCATION OF ARRAY"<<endl<<endl;

    dynamic_allocated_array();

    for(int i = 0;i<50;i++)
        cout<<"-";
    cout<<endl<<endl;
    cout<<"DYNAMIC ALLOCATION OF MULTIDIMENTIONAL ARRAY"<<endl<<endl;
    
    dynamic_allocated_MULTI_DIM_array();

    for(int i = 0;i<50;i++)
        cout<<"-";
    cout<<endl<<endl;
    cout<<"DYNAMIC ALLOCATION OF MULTIDIMENTIONAL ARRAY"<<endl<<endl;
    

}