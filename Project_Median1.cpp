#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
int	arr[n],temp[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		temp[i]=arr[i];
	}
	for(int i=1;i<=n;i++){
		if(i%2!=0){
sort(temp,temp+i);
			int k=i/2;
			
			cout<<"median - "<<temp[k]<<endl;
		}
		else{
			float temp=0;
			for(int j=1;j<=i;j++){
				temp=temp+arr[j-1];
				
			}
			temp=temp/i;
			cout<<"median - "<<temp<<endl;
		}
	}
	
	return 0;
}
