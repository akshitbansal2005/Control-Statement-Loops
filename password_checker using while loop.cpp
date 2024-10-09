#include <iostream>
using namespace std;
int main() {
    int password=123,user_password;
    cout<<"enter the password:"<<endl;
    cin>>user_password;
        while(password>0){
            if (password!=user_password){
                cout<<"enter the password:"<<endl;
                cin>>user_password;
            }
            else
            {
                cout<<"system is unlocked"<<endl;
            }
            break;
        }
}
