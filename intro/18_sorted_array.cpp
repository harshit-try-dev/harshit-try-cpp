#include <iostream>

void bubbleSort(int array[],int size);


int main() {
    int array[]={10,1,9,2,8,3,7,4,6,5};
    int size=sizeof(array)/sizeof(array[0]);

    for(int element:array){
        std::cout<<element<<" ";
    }
    std::cout<<'\n';
    bubbleSort(array,size);

    for(int element:array){
        std::cout<<element<<" ";
    }


    return 0;
}

void bubbleSort(int array[],int size){
    int temp;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(array[j] > array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;

            }
        }
    }
}

//optimised version&&&&&&&
/*
void bubbleSort(int array[],int size){

    for(int i=0;i<size-1;i++){

        bool swapped=false;

        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                std::swap(array[j],array[j+1]);
                swapped=true;
            }
        }

        if(!swapped) break;
    }
}
*/