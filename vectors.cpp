#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v= {12,1,3};
    for(int i: v){
        cout <<i<<" ";
    }cout <<"\n" <<v.size();
    char n; int x;
    cout <<"\nDO YOU WANT TO ADD SOMETHING? (Y/N): ";
    cin >>n;
    if(n=='Y'){
        cout <<"Enter: ";
        cin >>x;
        v.push_back(x);
        for(int i:v){
            cout <<i<<" ";
        }}
    else{
        cout <<"CHAL NA ";
        v.pop_back();
        for(int i: v){
            cout <<i<<" ";
        } cout <<"\n"<<v.size();
    }
    cout <<"\n"<<v.size()<<"\n\n" <<v.front() <<" "<<v.back() <<" "<<v.at(0);        
    

}