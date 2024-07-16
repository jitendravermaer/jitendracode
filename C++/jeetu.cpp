#include<iostream>
using namespace std;

class Jeetu{
    char name[20] ;
    public:
    void CollectData(){
        cout<<"Enter Name"<<endl;
        cin>>name;
    }
    void ShowAboutJeetu(){
        cout<<name;
    }
};
int main(){
    Jeetu J;
    J.CollectData();
    J.ShowAboutJeetu();

    return 0;
}