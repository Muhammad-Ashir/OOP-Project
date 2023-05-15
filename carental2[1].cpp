#include <iostream>
#include <fstream>

using namespace std;

void printmainmenu(); void logout(); void printmanagement(); 
void saveUserCredentials(const string& name, const string& email, const string& phone);
void saveEmployeCredentials(const string& ename, const string& eemail, const string& ephone);

class Car {
public:
    string name;        // Name of the car
    string model;       // Model of the car
    string year;        // Year of the car
    int rentCost;       // Rent cost per day
    bool available;     // Whether the car is available for rent

    // Default constructor
    Car() {
        name = "";
        model = "";
        year = "";
        rentCost = 0;
        available = true;
    }

    // Parameterized constructor
    Car(string name, string model, string year, int rentCost, bool available = true) {
        this->name = name;
        this->model = model;
        this->year = year;
        this->rentCost = rentCost;
        this->available = available;
    }
};

class user{
    
    private:
        string name;
        string email;
        string phone;

    public:
        user(string uname, string uemail, string uphone){
            name=uname;
            email=uemail;
            phone=uphone;
        }

};

class carrental : public user {
public:
    // Default constructor
    carrental(string uname, string uemail, string uphone) : user(uname, uemail, uphone) {}

    void printusertab() const {
        int x;
        cout << "Welcome to User Tab! \nPlease Select anyone of the following." << endl;
        cout << "1.Book any Ride.\n2.Cancel any Ride.\n3.View Previous Bookings. \n4.Logout" << endl;
        cin >> x;
        if (x == 1) {
            cout << "\t\t\t\t\t Navigating to Booking Section." << endl;
//            booking();
        } else if (x == 2) {
            cout << "\t\t\t\t\t Navigating to Cancel Section" << endl;
//            cancelbooking();
        } else if (x == 3) {
//            viewbookings();
        }
        else if (x == 4) {
            logout();
        } else {
            cout << "\t\t\t\t\t Wrong Selection Navigating back!" << endl;
            printmainmenu();
        }
    }
};

void saveEmployeCredentials(const string& name, const string& email, const string& phone) {
    ofstream file("Employeecredentials.txt", ios::app);
    if (file.is_open()) {
        // Write the credentials to the file
        file << name << " " << email << " "<< phone << endl;
        file.close();
        cout << "Credentials of Employee "<<name<<" saved."<< endl;
    } else {
        cout << "Error opening file." << endl;
    }
}
void saveUserCredentials(const string& name, const string& email, const string& phone) {
    ofstream file("Usercredentials.txt", ios::app);
    if (file.is_open()) {
        // Write the credentials to the file
        file << name << " " << email << " "<< phone << endl;
        file.close();
        cout << "Credentials of User "<<name<<" saved."<< endl;
    } else {
        cout << "Error opening file." << endl;
    }
}

void printmanagement(){
    string mname; string memail; string mphone; 
//    employee e,em,ep;
    int y;
    cout<<"Welcome to Managment Tab."<<endl;
        cout<<"Press 1 for Administration Tab. \nPress 2 for Employee tab. \nPress 3 to logout."<<endl;
        cin>>y;
        if (y==1)
        {
            cout<<"Admin:\n\t\t\t\t\t Enter name to Login:"<<endl;
            cin>>mname;
            cout<<"\t\t\t\t\t Enter your email:"<<endl;
            cin >> memail;
            cout<<"\t\t\t\t\t Enter your phone:"<<endl;
            cin >> mphone;
            cout<<"\t\t\t\t\t Logged in as "<<mname<<" successfully! \n\t\t\t\t\t NAVIGATING TO MAIN MENU \n"<<endl;
//            saveAdminCredentials(mname, memail, mphone);
//            management m1;
//            mname=m1.mname; memail=m1.memail; mphone=m1.mphone;
//            m1.admintab();
        }
        if (y==2)
        {
            cout<<"Employee:\n\t\t\t\t\t Enter Name to login:"<<endl;
//            cin>>e.ename;
            cout<<"\t\t\t\t\t Enter your email:"<<endl;
//            cin >> e.eemail;
            cout<<"\t\t\t\t\t Enter your phone:"<<endl;
//            cin >> e.ephone;
            cout<<"\t\t\t\t\t Logged in as "<<" successfully! \n\t\t\t\t\t NAVIGATING TO MAIN MENU \n"<<endl;
//            saveEmployeCredentials(e.ename,e.eemail,e.ephone);
//            employetab();
        }
        else if (y==3)
        {
            logout();
        }
        else{
            cout<<"Exiting... GOOD BYE :-)"<<endl;  
        }
}

void printmainmenu(){
    string name, email, phone;
    carrental c2(name, email, phone);
    int x;
    // cout<<"\t\t\t\t\t Welcome to GIKI Car Rental Sytem \t\t\t\t"<<endl;
    cout<<"Select User: \n1.Management. \n2.User. \n3.Exit. "<<endl;
    cin>>x;
    if (x==1)
    {
        printmanagement();
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
        saveUserCredentials(name, email, phone);
        c2.printusertab();
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

