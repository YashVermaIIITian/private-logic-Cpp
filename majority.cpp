#include <iostream>
#include <vector>
using namespace std;
vector <int> Fun(vector <int> vec){
    int k;
    for(int i=0;i<vec.size();i++){
        int s=0;
        for(int j=0;j<vec.size();j++){ 
            if(vec[i]==vec[j]){
                s=s+1;} 
            }
        if(s>vec.size()/2){
            k=i;}}
    cout <<vec[k];}

int main(){
    vector <int> vec={1,8,8,8,8,8,2,2};
    Fun(vec);
}