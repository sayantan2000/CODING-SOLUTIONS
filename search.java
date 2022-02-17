import java.util.Scanner;

public class search{
	public static void main(String [] args){
		//System.out.print("hii");
		int arr[]={4,8,9,10,20};
		
		System.out.println(binarySearch(arr,20,arr.length,0));

	}
	static int binarySearch(int arr[],int key,int high,int low){
		if(low>high) return -1;
		int mid=low+(high-low)/2;
		if(arr[mid]==key) return mid;

		if (key>arr[mid]) {
			return binarySearch(arr,key,high,mid+1);
			
		}
		else
			return binarySearch(arr,key,mid-1,low);
	}
}