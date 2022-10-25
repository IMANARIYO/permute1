 	#include<iostream>
 	using namespace std;
 	void swap(int arr[],int i){
 		if(i>0){
 			int temp=arr[i];
 		arr[i]=arr[i-1];
 		arr[i-1]=temp;
		 }
 		else
 		{	int temp=arr[i];
 		arr[i]=arr[i+1];
 		arr[i+1]=temp;
 			
		 }
	 }
	 void display(int arr[]){
	 		for(int v=0;v<=3;v++){
	 				cout<<arr[v];
			 } 
			 cout<<endl;
	 }
	 int main(){
	 	
	 	int  arr[]={1,2,3,7};
	 	for(int i=0;i<=4;i++){
	 		if(i%2==0){
	 		swap(arr,2);
			  int temp=arr[0];
			 arr[0]=arr[3];
	 		arr[3]=temp;	
	 			
			 }
	 		
	 		if(i!=4)
	 		{
	 				cout<<i<<"\t"<<endl;
	 		display(arr);
	 		for(int j=1;j<=3;j++){
	 			swap(arr,j);
	 			display(arr);
	 			if(j==3){//cout<<"hellowatch previous and next"<<endl;
	 			
				 swap(arr,2);
					display(arr);
					swap(arr,3);
					display(arr);
					swap(arr,2);
					}
 }
	 }

		 }

	 	return 0;
	 }
