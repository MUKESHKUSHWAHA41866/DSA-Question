#include<iostream>
using namespace std;

// pattern

//        A
//       B B
//     C C C
//   D D D D
// E E E E E 

//         A
//       A B
//     A B C
//   A B C D
// A B C D E

int main()
{
    int row,col,n;
    cout<<"Enter the Input value: ";
    cin>>n;

    for(row=1;row<=n; row= row+1){
        for(col=1;col<=n-row; col=col+1){
            cout<<"  ";
        }
        
        // for(col=1;col<=row; col=col+1){
            //  char name = 'A'+col-1;
            //  cout<<name<<" ";
    

          for(col=row;col>=1; col=col-1){
            cout<<col<<" ";
          }

        // for(char name='A'; name<='A'+row-1;name= name+1)
        // cout<<name<<" ";
        

        cout<<endl;

     }

}

      