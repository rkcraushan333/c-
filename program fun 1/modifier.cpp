#include <iostream>
#include <climits>
using namespace std;

int main(){

    int x;
    cout<<sizeof(x)<<endl;
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;
    
    x = INT_MAX;
    cout<<x<<endl;
    cout<<x+1<<endl;
    return 0;
}