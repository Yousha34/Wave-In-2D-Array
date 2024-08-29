#include<iostream>
using namespace std ;
int main (){

    int rows, col ;
	
	cout << "Enter number of rows : " ;
	cin >> rows ;
	
	cout << "Enter no of colomns : " ;
	cin >> col ;

    int arr[rows][col] ;
		
	for(int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cin >> arr[i][j] ;
		}
		
	}

    cout << "\nFor Original : \n" ;

    for(int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cout << arr[i][j] << " " ;
		}

        cout << endl ;
		
	}

    cout << endl << "\nFor Wave : \n" ;

    for(int i = 0; i < rows; i++ ){
			
		if( i % 2 == 0 ){

            for( int j = 0; j < col; j++ ){
                cout << arr[i][j] << " " ;
            }

        }
        
        else{

            for( int j = col-1; j >= 0; j-- ){
                cout << arr[i][j] << " " ;
            }

        }

        cout << endl ;

    }

    return 0 ;
}    