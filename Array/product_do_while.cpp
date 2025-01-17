#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string name[15];
    int code[10],opt,count=0,search;
    float price[10],total[10];
    int find = 0;

    cout<<"Product of Drink"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"1.insert \t 2.view \t 3.price \t 4.total"<<endl;
    cout<<"Enter Your Option      :";
    cin>>opt;
do
{
    switch (opt)
    {
    case 1:
        for ( int i = 0; i < count; i++)
        {
        cout<<"Enter Name Of Product    :";
        cin>>name[i];
        cout<<"Enter Code Of Product    :";
        cin>>code[i];
          
        }
    case 2:
        for (int i = 0; i < count; i++)
        {
            find = 0 ;
            cout<<"Enter Code to search   :";
            cin>>search;
            if (search == code[i])
            {
                cout<<setw(10) <<"Product Name";
                    <<setw(10)<<"Product code";
            find = 1 
            }
            if (find == 0)
            {
             cout<<"Data Not Found";   
            }
        }
    case 3: 
        
        
        
        break;
    
    default:
        break;
    }
} while (/* condition */);



}