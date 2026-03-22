#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of person: ";
    cin>>n;
    vector<int>weight(n);
    cout<<"Enter the weight of each person: ";
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    sort(weight.begin(), weight.end());

    int maxWeight;
    cout<<"Enter the value of maxWeight: ";
    cin>>maxWeight;

    int curr_weight =0;
    int count =0;

    for(int i=0;i<n;i++){
        curr_weight += weight[i];
        count++;
        if(curr_weight >= maxWeight){
            cout<<"Max No of people: "<<count<<endl;
            break;
        }
    }
    cout<<"Done";
    return 0;
}