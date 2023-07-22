#include <iostream>
using namespace std;

void transpose(int arr[3][3]){
int arr_2[3][3];

for (int i=0; i<3;i++){
    for (int j=0; j<3; j++){
        arr_2[i][j]=arr[j][i];
    }
}

for (int i=0; i<3;i++){
    for (int j=0; j<3; j++){
        cout<<arr_2[i][j];
        cout<<" ";
    }
    cout<<"\n";
}

}
int main(){
int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
for (int i=0; i<3;i++){
    for (int j=0; j<3; j++){
        cout<<arr[i][j];
        cout<<" ";
    }
    cout<<"\n";
}

 cout<<"\n";
transpose(arr);
    return 0;
}