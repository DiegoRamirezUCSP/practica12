#include <iostream>

using namespace std;
void swapa(int *xp,int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

bool comparingasending(int i,int j)
{
    return i > j;
}

bool comparingdesending(int i,int j)
{
    return i < j;
}

void ordenamiento(int arreglo[],int n,bool (*deff)(int,int),void (*deff2)(int*,int*))
{
    for(int i = 0;i < n-1;i++)
        for(int j=0;j < n-i-1;j++)
            if((*deff)(arreglo[j],arreglo[j+1]))
                (*deff2)(&arreglo[j],&arreglo[j+1]);
}

void printArray(int arr[],int sizee)
{
    for(int i=0;i < sizee;i++)
        cout << arr[i] << " ";
    cout << endl;
}




int *funcion(){
    int *ptr = new int;
    *ptr = 5;
    return ptr;
}

void print(){
    cout << "sdfa";
    int a[33];
}

int main(){
    //int arr[]={12,32,123,63,124,53};
    bool(*def1)(int,int),(*def2)(int,int);
    void(*ndef)(int*,int*);
    ndef = swapa;
    def1 = comparingasending;
    def2 = comparingdesending;
    //ordenamiento(arr,6,def1,ndef);
    //printArray(arr,6);
    int n;
    cin >> n;
    int *pt = new int[n];
    for(int i=0;i<n;i++){
        cin >> pt[i];
    //delete pt;
    }
    printArray(pt,n);
    ordenamiento(pt,n,def1,ndef);
    printArray(pt,n);
    delete[] pt;


    /*int arr[]={12,32,123,63,124,53};
    bool(*def1)(int,int),(*def2)(int,int);
    void(*ndef)(int*,int*);
    ndef = swapa;
    def1 = comparingasending;
    def2 = comparingdesending;
    ordenamiento(arr,6,def1,ndef);
    printArray(arr,6);
*/

}
