#include<iostream>
using namespace std;
int maximum_of_array(int *ptr,int n){
	int max=*ptr;
	for(int i=0;i<n;i++){
		if(*(ptr+i)>=max){
			max=*(ptr+i);
			}
	}
	return max;
}
int main (){
		int n,lcm=0;
	cout<<"Enter the size of array"<<endl;
	cin>>n;

	int arr[n];
	cout<<"Enter the "<<n<<" elements of the array separated by space"<<endl;

	for(int i=0;i<n;i++) cin>>arr[i];     //for entering the array

	int limit,r;
	cout<<"Enter the number till which you want to print the common multiples"<<endl;
	cin>>limit;
	
	int maximum=maximum_of_array(arr,n);
	
	if(maximum>=limit){cout<<"Wait!!! Have some sense you are looking for a common multiple less than the minimum element XD";
		return 0;
	}

	for(int j=1;j<limit;j++){
		r=0;        //final value of r will indicate whether
					//the respective number is a common multiple or not

		 	for(int l=0;l<n;l++){

				if(j%arr[l]!=0){
				break;
				}

			r++;
   			}

		if(r==n){

			lcm=j;
			break;

		}

	}
	
	int size = limit/lcm;
		if (lcm!=0){
			int size = limit/lcm;
			int cmarr[size]={0};

			for(int m=0;m<size;m++){
			cmarr[m]=lcm*(m+1);
			}

  			for(int b=0;b<size;b++) cout<<cmarr[b]<<endl;
		}

		else {cout<<"Sorry no common multiples exits till "<<limit<<" number"<<endl;}
		/*int a=lcm;
		for(int m=0;m<size;m++){
			lcm=a*(m+1);
			cout<<lcm<<endl;
		}*/
		return 0;
	}
