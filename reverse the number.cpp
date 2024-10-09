#include <iostream>
using namespace std;
int main() {
    int number,reverse=0,rem;
    cout<<"enter  the number:"<<endl;
    cin>>number;
    while(number!=0){
        rem=number%10;
        reverse=reverse*10+rem;
        number=number/10;
    }
    cout<<"reverse number="<<reverse<<endl;
    return 0;
}
//output
//enter  the number:
//12345
//reverse number=54321
