#include<iostream>

using namespace std;
int main(){
    int arr[5];
    cout<<"Enter values in array";
    for(int i=0;i<5;i++){
            cin>>arr[i];
    }
    int temp;
    //Insertion Sort
    for(int i=1;i<5;i++){
        int key=arr[i];
        for(int j=i-1;j>=0;j--){
            if(key<=arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array is:";
    for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
    }
    
    return 0;

}