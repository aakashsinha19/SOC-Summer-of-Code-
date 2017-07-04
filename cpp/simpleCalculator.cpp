#include<iostream>
using namespace std;
int main()
{
    int x,y,sum,mul,mod,sub;
    float div;
    int ch;
    char choice;
    cout<<"Enter the calculator menu (y/n)"<<endl;
    cin>>choice;
    if(choice=='y')
    {
        cout<<"Enter a choice:"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Module"<<endl;
        cout<<"6. Exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"Enter the values of x and y"<<endl;
                      cin>>x>>y;
                      sum = x+y;
                      cout<<"The sum is :"<<sum<<endl;
                      break;
            case 2: cout<<"Enter the values of x and y"<<endl;
                      cin>>x>>y;
                      sub = x-y;
                      cout<<"The difference is :"<<sub<<endl;
                      break;
            case 3: cout<<"Enter the values of x and y"<<endl;
                      cin>>x>>y;
                      mul = x*y;
                      cout<<"The product is :"<<mul<<endl;
                      break;
            case 4: cout<<"Enter the values of x and y"<<endl;
                      cin>>x>>y;
                      div = x/y;
                      cout<<"The quotient is :"<<div<<endl;
                      break;
            case 5: cout<<"Enter the values of x and y"<<endl;
                      cin>>x>>y;
                      mod = x%y;
                      cout<<"The remainder is :"<<mod<<endl;
                      break;
            case 6: cout<<"Terminating!"<<endl;
                      break;
            default: cout<<"Invalid Choice"<<endl;
                    break;
        }

    }
    else
    {

        cout<<"ThankYou!"<<endl;
    }
    return 0;
}
