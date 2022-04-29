#include <iostream>
using namespace std;

struct info{
    public:
    string number[6];
    string name[6];
    string Age[6]; 
};

void prints(){
    info responses;
    for(int i = 1; i<=5; ++i){
        cout<< "student "<<i<<"'s"<<" Number: "<< responses.number[i]<<endl;
        cout<< "student "<<i<<"'s"<<" Name: "<< responses.name[i]<<endl;
        cout<< "student "<<i<<"'s"<<" Age: "<< responses.Age[i]<<endl;
        cout <<"----------------------------------------------------------\n";
    }
}

void welcome(){
    info information;
    cout<<"welcome please enter 5 Different students information below: "<<endl;
    for(int i = 1; i<=5; ++i){
        cout<<"Please enter the "<< i <<" students number: "<<endl;
    cin>>information.number[i];
    cout<<"enter "<<i<<" Students name: "<<endl;
    cin>>information.name[i];
    cout<<"enter "<<i<<" students age"<<endl;
    cin>>information.Age[i];
    }
    prints();
}
int main(){
    welcome();

}