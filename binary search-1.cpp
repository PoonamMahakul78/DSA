#include<stdio.h>
int main(){
	int a[]={10,20,30,40,55,66,89,90,95,97};
	int low=0,high=9,mid,key=95,found=0;
	while(low<=high){
		mid=(low+high)/2;
		if(key==a[mid]){
			found=1;
			break;
		}
		else if(key<a[mid]){
			high=mid-1;
		}
		else if(key>a[mid]){
			low=mid+1;
		}
		if(found==1){
			printf("success");
		}
		else{
			printf("not success");
		}
		return 0;
	}
}

