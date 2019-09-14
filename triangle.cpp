#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<5;i++){
        for(int j=1;j<2*i;j++){
            if(j<=i){
                cout<<j;
            }else{
                cout<<2*i-j;
            }
        }
        cout<<endl;
        
    }
}

