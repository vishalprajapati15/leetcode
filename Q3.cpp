#include<bits/stdc++.h>
using namespace std;

int main(){
    string binary;
    cout<<"Enter the string: ";
    cin>>binary;

    int count =0;
    int res = 0;

    for(char ch : binary){
        if(ch == '1'){
            count++;
            res += count;
        }
        else{
            count =0;
        }
    }

    cout<<"Ans is: "<<res<<endl;
    cout<<"Done";
    return 0;
}