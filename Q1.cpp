#include <iostream>
using namespace std;

bool check(string word, char start, char end){
    for(char ch: word){
        if(ch < start || ch > end){
            return false;
        }
    }
    return true;
}

// bool allSmall(string word){
//     for(char ch: word){
//         if(ch < 'a' || ch > 'z'){
//             return false;
//         }
//     }
//     return true;
// }


int main(){

    string word;
    cout<<"Enter the word: ";
    cin>>word;

    bool flag = true;

    if(check(word, 'A', 'Z') || check(word, 'a', 'z') || check(word.substr(1), 'a', 'z')){
        flag = true;
    }
    else{
        flag = false;
    }
    cout<<flag<<endl;
    cout<<"Done";
    return 0;
}