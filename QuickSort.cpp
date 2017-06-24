#include <iostream> 

int partition(int *A, int start, int end) {
	int pivot = A[end];
	int pIndex = start;
	for (int i = start; i < end ; i++ ) {
		if ( pivot >= A[i] ) {
			std::swap(A[i], A[pIndex]);
			pIndex++ ;
		}
	}
	std::swap( A[pIndex], A[end] );
	return pIndex;
}

void QuickSort(int *A, int start, int end ) {
	if (start < end) {
		int partIndex = partition(A, start, end) ;
		QuickSort(A, start,partIndex-1);
		QuickSort(A, partIndex+1, end) ;
		}
	}

int main() {

	int A[] = {7,2,1,6,8,5,3,4} ;
	QuickSort(A,0,7) ;
	for(int i=0; i<=7; i++ ) {
		std::cout<< A[i] << " ";
		}
	std::cout<< std::endl;
}

