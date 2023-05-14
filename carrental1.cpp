#include <iostream>
using namespace std;

void printmainmenu(); void logout(); 
void printmainmenu(){
    string name, email, phone;
    int x;
    // cout<<"\t\t\t\t\t Welcome to GIKI Car Rental Sytem \t\t\t\t"<<endl;
    cout<<"Select User: \n1.Management. \n2.User. \n3.Exit. "<<endl;
    cin>>x;
    if (x==1)
    {
//        printmanagement();
    }
    else if (x==2)
    {
        cout<<"User:\n\t\t\t\t\t Enter your name to login:"<<endl;
        cin >> name;
        cout<<"\t\t\t\t\t Enter your email:"<<endl;
        cin >> email;
        cout<<"\t\t\t\t\t Enter your phone:"<<endl;
        cin >> phone;
        cout<<"\t\t\t\t\t Logged in as "<<name<<" successfully! \n\t\t\t\t\t NAVIGATING TO MAIN MENU \n"<<endl;
    }
    else if (x==3)
    {
        cout<<"Exiting... GOOD BYE :-)"<<endl;  
    }
};

void logout(){
    cout<<"Logging out."<<endl;
    printmainmenu();
}

int main(){
    cout<<"\t\t\t\t\t Welcome to GIKI Car Rental Sytem \t\t\t\t"<<endl;
    printmainmenu();

    return 0;
}

