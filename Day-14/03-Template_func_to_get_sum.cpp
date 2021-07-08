#include<iostream>

using namespace std;

template <class T>
T sum_arr(T arr[], int size){
    T result = 0;
    for(int i=0;i<size;i++){
        result += arr[i];
    }
    return result;
}

int main(){
    int arr_i[] = {1,2,3,4,5,6,7,8,9,10};
    double arr_d[]= {1.2,2.3,3.4,5.6,8.9,7.5,6.3,4.8};

    cout << "Sum of int array is " << sum_arr<int>(arr_i,10) << endl;
    cout << "Sum of double array is " << sum_arr<double>(arr_d,8) << endl;
    return 0;
}