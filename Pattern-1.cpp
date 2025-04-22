#include<iostream>
using namespace std;
int main()
{
	
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        int val=1;
        while(col<=n-row+1)
        {
            cout<<val;
            val++;
            col++;
        }
      
        int start=(row+(n-1))-n;
        while(start)
        {
            cout<<"*";
            start--;
        }
        int star=(row+(n-1))-n;
        while(star)
        {
            cout<<"*";
            star--;
        }

        int sta=(n-row)+1;
        while(sta)
        {
            cout<<sta;
            sta--;
        }
        cout<<endl;
        row++;
       

    }
}
