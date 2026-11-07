#include<iostream>
#include<vector>
using namespace std;
int main(){
    int area,M=0;
    vector<int> line={1,8,6,2,5,4,8,3,7};
    for(int i=0; i<line.size(); i++){
        for(int j=i+1; j<line.size(); j++){
            int m=min(line[i],line[j]);
            area=m*(j-i);
            M=max(area,M);
        }
    }
    cout<< M;
}