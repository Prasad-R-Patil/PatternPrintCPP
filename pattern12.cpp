
/*
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

*/

#include<iostream>
using namespace std;


void Pattern(int n)
{
    

    for(int i=1; i<=n; i++)
    {
       
        for(int j=1; j<=i; j++)
        {
           cout<<j<<" ";
        }

        cout<<endl;
    }

}

int main()
{
    int Value = 0;

    cout<<"Enter The Value :==>>   " ;
    cin>>Value;
    
    Pattern(Value);


    return 0;
}