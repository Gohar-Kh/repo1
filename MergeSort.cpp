#include <iostream>

void Merge( int *A, int *L, int lcount, int *R, int rcount) {
	int i = 0; // index L subarray;
	int j = 0; // index R subarray;
	int k = 0; // index A array;

	while ( i < lcount && j < rcount ) {
		if ( L[i] < R[j] ) A[k++] = L[i++] ;
		else A[k++] = R[j++];
	}
	while ( i < lcount ) A[k++] = L[i++] ;
	while ( j < rcount ) A[k++] = R[j++] ;
}

void MergeSort( int *A , int n ) {
	int mid, *L, *R ;
	if(n < 2) return ;

	mid = n/2 ;

	L = new int [mid] ;
	R = new int [n-mid];

	for (int i = 0; i < mid ; i++) L[i] = A[i] ;
	for (int i = mid; i < n ; i++) R[i-mid] = A[i] ;

	MergeSort( L, mid ) ;
	MergeSort( R, n-mid ) ;
	Merge( A, L, mid, R, n-mid ) ;
	delete [] L;
	delete [] R;
}

int main() {
	int A[] = {2,5,4,8,1,5,2,3} ;
	int num = sizeof(A)/sizeof(A[0]) ;
	MergeSort( A ,num ) ;
	
	for ( int i = 0; i < num; i++ ) {
		std::cout<< A[i] <<" " ;
	}
	std::cout <<std::endl;
	return 0;
} 	
