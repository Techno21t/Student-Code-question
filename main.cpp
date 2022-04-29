#include <iostream>
using namespace std;

struct info{
    string number[5];
    string name[5];
    string Age[5]; 
};

void prints(){
    info information;
    for(int x = 0; x=0; ++x){
        cout<< "student "<<x<<"'s"<<" Number: "<< information.number[x];
        cout<< "student "<<x<<"'s"<<" Number: "<< information.number[x];
    }
}
int main(){
    info information;
    cout<<"welcome please enter 5 Different students information below: "<<endl;
    for(int i = 0; 0<=4; ++i){
        cout<<"Please enter the "<< i <<" students number: "<<endl;
    cin>>information.number[i];
    cout<<"enter "<<i<<" Students name: "<<endl;
    cin>>information.name[i];
    cout<<"enter "<<i<<" students age"<<endl;
    cin>>information.Age[i];
    }
    

}