#include<iostream>
using namespace std;
int  main()
{
    int array[3][4] = {{2,3,4,1},{4,5,6,7},{6,7,88,3}};
    int max=array[0][0];
    int j;
    for(int i=0;i<3;i++){
       for(int j=0;j<4;j++){
            if(max < array[i][j])
            max = array[i][j];
     }
    }
    cout<<"\nMaximum value from this array is = "<<max<<endl;
}