#include <iostream>
using namespace std;

int main(){
    int lst[2][2]={{10,11},{12,13}};
    int i,j=0;
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            cout<< *(*(lst+i)+j)<<" ";
        }
        cout<<endl;
    }
}   