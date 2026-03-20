#include <bits/stdc++.h>
using namespace std;

struct Transaction {
    string sender;
    string rec;
    double amo;
    long long time;
};

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    vector<Transaction> t(n);
    cout<<"Enter Transaction details: ";
    for(int i=0;i<n;i++){
        cin>>t[i].sender;
        cin>>t[i].rec;
        cin>>t[i].amo;
        cin>>t[i].time;
    }

    vector<bool> fraud(n, false);

    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(t[i].sender == t[j].sender && t[i].rec == t[j].rec && t[i].amo == t[j].amo && abs(t[i].time -t[j].time) <= 60){
                fraud[i] = true;
                fraud[j] = true;
            }
        }
    }

    cout<<"Fraud Transactions: "<<endl;
    for(int i=0;i<n;i++){
        if(fraud[i]){
            cout<<t[i].sender<<" "<<t[i].rec<<" "<<t[i].amo<<" "<<t[i].time<<endl;
        }
    }
    cout<<"Done";
    return 0;
}