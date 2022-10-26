#include <iostream>
using namespace std;
int main(){
    int *pt=new int[5]{};
     cout<<"previous array:";
     for(int i=0;i<5;i++){
        cout<<pt[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<"pt["<<i<<"]:";
        cin>>pt[i];
    }
    cout<<"after array:";
    for(int i=0;i<5;i++){
        cout<<pt[i]<<" ";
    }
}