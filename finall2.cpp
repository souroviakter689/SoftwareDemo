#include<iostream>
using namespace std;


class Mobile{
private:
string OwenerName;
string MobileNumber;
double balance;
string OSname;
bool lockStatus;

public:

Mobile () {

    cout<< "xxxxxxxxxxxx";//comment

}

Mobile(string name, string N,double b,string OS,bool l){

    OwenerName=name;
    MobileNumber=N;
    balance=b;
    OSname=OS;
    lockStatus=l;

}

~Mobile(){

    cout<< OwenerName<<" Deleted"<<endl;
}


string getOwnerName(){

    return OwenerName;
}

string getMobileNumber(){

    return MobileNumber;
}
double getbalance(){

    return balance;
}
string getOSname(){

    return OSname;
}
bool getlockStatus(){

    return lockStatus;
}


void showinfo(){

cout << "Owner name : "<< OwenerName<<endl;
cout << "Mobile Number : "<< MobileNumber<<endl;
cout << "Mobile Balance : "<< balance<<endl;
cout << "Mobile OS Name : "<< OSname<<endl;
cout << "MObile Lock Status : "<< lockStatus<<endl;


}


void recharge (int amount){

    if (lockStatus==false){

        cout<<"Phone is locked. please unlocck the phone to recharge."<<endl;

    }
    else{

        balance+=amount;
        cout<<"Recharge sucessful.New balance:"<<balance<<endl;

    }



}


void CallSomeone(int timeDuration){

if (lockStatus==false){

        cout<<"Phone is locked. please unlock the phone to make a call."<<endl;

    }
else{

    double callcost= timeDuration*0.5;
    if(callcost>balance){

        cout<<"Insufficient balance.Please recharge to call"<<endl;
    }

    balance-=callcost;

    cout <<"Successful.Call duration : "<< timeDuration<<" Minutes.Remaining balance:"<<balance<<endl;
}



}


};
int main (){


Mobile m1("Purnima","01**********",700,"Android",true);

Mobile m2("Riya","01********",600,"IOS",false);
m1.showinfo();
m1.recharge(m1.getbalance()+50);
m1.CallSomeone(7);
m2.showinfo();
m2.recharge(50);

 return 0;

}
