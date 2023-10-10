 #include<iostream>
 using namespace std;

 void shiftNumbers(int arr[], int n){
    int j = 0;
    for (int  i=0;i<n;i++){
        if(arr[i]<0){ 
            swap(arr[i], arr[j]);
            j++;
        } 
    }

 }

 int main(){
    int arr[7] = {-11,5 ,-7,0,-3,8,-2}; 
    int n = 7;

    shiftNumbers(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
}
 }