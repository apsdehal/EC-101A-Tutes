#include  <iostream>
using namespace std;
void sort_array(int *a,int n){int i,j;
		for(i=0;i<n;i++ ){for(j=0;j<n;j++){
	
	if(a[i]<a[j]) swap(a[i],a[j]);}
	}
}
void merge_array(int *a,int n,int *b,int m,int *c){
	int k=0,l=0,i=0;
	while(i<m+n){if(a[k]<b[l]){c[i]=a[k];
	k++;
	} else {c[i]=b[l];
	l++;
	}
	i++;}
	}
void display_array(int *a,int n){
	int i;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
int main() {int M,i,N;
	cout<<"Enter the size M of array A: ";
	cin>>M;
	int A[M];
	cout<<"\nEnter the elements of array A: ";
	for(i=0;i<M;i++)
	cin>>A[i];
	cout<<"\nYou entered the array as follows:"<<endl;
	display_array(A,M);
	cout<<"Enter the size N of array B: ";
	cin>>N;
	int B[N];
	cout<<"\nEnter the elements of array B: ";
	for(i=0;i<N;i++)
	cin>>B[i];
	cout<<"You entered the array as follows: "<<endl;
	display_array(B,N);
	sort_array(A,M);
	cout<<"The sorted array A is:"<<endl;
	display_array(A,M);
	sort_array(B,N);
	cout<<"The sorted array B is:"<<endl;
	display_array(B,N);
	int C[M+N];
	merge_array(A,M,B,N,C);
	cout<<"The array C is: "<<endl;
	display_array(C,M+N);
	cin.ignore();
	cin.get();
	return 0;
	
}
