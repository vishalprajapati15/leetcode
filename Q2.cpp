#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<string>vec(n);
    cout<<"Enter string: ";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int col = vec[0].size();
    int count =0;
    for(int i=0;i<col;i++){
        for(int j =1;j<n;j++){
            if(vec[j][i] < vec[j-1][i]){
                count++;
                cout << "Unsorted column index: " << i << endl;
                break;
            }
        }
    }

    cout<<"Ans is : "<<count<<endl;
    cout<<"Done";
    return 0;

}