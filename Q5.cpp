#include<bits/stdc++.h>
using namespace std;

bool isSmall(pair<int, int>a, pair<int, int>b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    return a.second < b.second;
}

void customSort(vector<pair<int, int>> &v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        int minIdx = i;
        for(int j = i+1;j<n;j++){
            if(isSmall(v[j], v[minIdx])){
                minIdx = j;
            }
        }
        swap(v[i], v[minIdx]);
    }
}

int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    vector<pair<int, int>>vec(n);
    cout<<"Enter Array: ";
    for(int i=0;i<n;i++){
        cin>>vec[i].first;
        cin>>vec[i].second;
    }
    cout<<"Before sorting: ";
    for(int i=0;i<n;i++){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }

    customSort(vec);
    cout<<"After sorting: ";
    for(int i=0;i<n;i++){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }

    cout<<"Done";
    return 0;

}



//or

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    vector<pair<int, int>>vec(n);
    cout<<"Enter Array: ";
    for(int i=0;i<n;i++){
        cin>>vec[i].first;
        cin>>vec[i].second;
    }
    cout<<"Before sorting: ";
    for(int i=0;i<n;i++){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }

    sort(vec.begin(), vec.end());
    
    cout<<"After sorting: ";
    for(int i=0;i<n;i++){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }

    cout<<"Done";
    return 0;

}