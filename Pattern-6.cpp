#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // 
    int row=1;
    while(row<=n)
    {
        int space=row-1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int start=(n-row)+1;
        while(start)
        {
            cout<<"*";
            start--;
        }
        cout<<endl;
        row++;
    }
}


// **********
//  *********
//   ********
//    *******
//     ******
//      *****
//       ****
//        ***
//         **
//          *
