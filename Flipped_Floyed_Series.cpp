#include<iostream>
using namespace std;
int main() {
    int i, j,k=5,a=1;
    for (i = 1; i<=5; i++) {
        for (j = 1; j <= 5; j++) {
            if(j>=k){
            cout <<a;
            a++;
            }
            else
                cout<<" ";     
        }
        cout <<"\n";
        k--;
    }
}
/*
    1
   23
  456
 78910
1112131415
*/
