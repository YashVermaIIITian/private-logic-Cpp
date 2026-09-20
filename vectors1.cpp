#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(0);
    vec.push_back(3);
    vec.push_back(4);
    cout <<"NO OF BYTES: "<<sizeof(vec)<<"\n";
    cout <<"SIZE= "<<vec.size() <<"  "<<"CAPACITY= "<<vec.capacity();


}