// Online C++ compiler to run C++ program online

#include<iostream>
using  namespace std;
int main() {
int n = 5, m=5;

for(int i =1;i<=n;i++){
    for(int j=m;j>=i;j--){
    cout<<"* ";
    }
    cout<<endl;
}

    return 0;
}