#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Value of n:";
    cin>>n;
    // char x='A';

// A B C D E
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y

    for(int i=1;i<=n;i++)
    {
        char x='a';
        
// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e 

        for(int j=1;j<=n;j++)
        {
            cout <<x <<" ";
            x++;
        }
        cout<<endl;
    }
}