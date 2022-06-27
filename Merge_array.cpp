//adding 2 array and sort
//Practical 1.b

#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Enter size of arrays  : "<<endl;
	cin>>n;
	
	int ar1[n], ar2[n], ar3[n+n];
	
	cout<<"Enter element in first array "<<endl;
	
	for(int i=0; i<n; i++){
		cin>>ar1[i];		
	}
	
	cout<<"Enter element in second array "<<endl;
	
	for(int i=0; i<n; i++){
		cin>>ar2[i];
	}
	
	cout<<endl<<"Elements in first matrix"<<endl;
	
	for(int i=0; i<n; i++){
		 cout<<ar1[i]<<"  ";		
	}
	
	cout<<endl<<"Elements in second matrix"<<endl;
	
	for(int i=0; i<n; i++){
		 cout<<ar2[i]<<"  ";		
	}
	
	//merging first matrix
	
	for(int i = 0; i<n;i++){
		ar3[i] = ar1[i];
	}
	
	//merging second metrix
	int t = 0;
	for(int i = n; i < n+n; i++,t++){
		ar3[i] = ar2[t];
	}
	
	
	cout<<endl<<"After merging....."<<endl;
	for(int i=0; i<n+n; i++){
		cout<<ar3[i]<<"  ";
	}
	
	//sorting array
	
	cout<<endl<<"After sorting..."<<endl;
	
	for(int i=0; i<n+n; i++){
		for(int j = i+1; j< n+n; j++){
			if(ar3[i] > ar3[j]){
				swap(ar3[i], ar3[j]);
			}
		}
	}
	
	for(int i=0; i<n+n; i++){
		cout<<ar3[i]<<"  ";
	}
	return 0;
}
