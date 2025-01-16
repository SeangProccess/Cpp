#include <iostream>
#include <iomanip>

using namespace std;

int main(){
     int id[10], count=0,search;
     int opt;
    string name[10];
    int find = 0;
    do
    {
        cout<< "1.insert\n2.view\n3.search\n4.update\n5.delete\n6.exit"<<endl;
         cout<<"---------------------------------"<<endl;
        cout<< "enter option[1-6]: ";cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<"\tEnter Staff ID         :";
            cin>>id[count];
            cout<<"\tEnter Staff Name       :";
            cin>>name[count];
            count++;
            break;
        case 2:
            cout<<left;
            cout<<setw(8)<<"id"
                <<setw(20)<<"Name"<<endl;
            cout<<"---------------------------------"<<endl;
            for(int i = 0; i<count; i++){
                cout<<setw(8)<<id[i]
                <<setw(20)<<name[i]<<endl;
            }
        case 3:
            find == 0;
            cout<<"enter id to search : ";
            cin>>search;
            for(int i= 0; i<count; i++){
                if(id[i] == search){
                    cout<< "search data : "<<endl;
                    cout<<setw(8)<<id[i]
                        <<setw(20)<<name[i]<<endl;
                        find = 1;
                }
            }
            if(find == 0){
                cout<< "Data not found !!"<<endl;
            }
            break;
        default:
            cout<< "No option please chose[1-6]!!!"<<endl;
            break;
        }
    } while (opt != 6);//6 != 6
    
}