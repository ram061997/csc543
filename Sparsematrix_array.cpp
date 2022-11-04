#include<iostream>
#include<array>
using namespace std;

int main(){
	
	int sparse_matrix [4][5]= 
	{
		{0,0,3,0,4},
		{0,0,5,7,0},
		{0,0,0,0,0},
		{0,2,6,0,0}
	};
	int size = 0;  
    for(int i=0; i<4; i++)  
    {  
        for(int j=0; j<5; j++)  
        {  
            if(sparse_matrix[i][j]!=0)  
            {  
                size++;  
            }  
        }  
    } 
	
	 int matrix[3][size];   
     int k=0;  
	 for(int i=0; i<4; i++)  
    {  
        for(int j=0; j<5; j++)  
        {  
            if(sparse_matrix[i][j]!=0)  
            {  
                matrix[0][k] = i;  
                matrix[1][k] = j;  
                matrix[2][k] = sparse_matrix[i][j];  
                k++;  
            }  
      }  
    }  
	
	  for(int i=0 ;i<3; i++)  
    {  
        for(int j=0; j<size; j++)  
        {  
            cout<< matrix[i][j];  
            cout<<"\t"; 
        }  
        cout<<"\n";  
    }  
}