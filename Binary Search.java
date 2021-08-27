public class BinarySearch extends Pronic {

	public static void main(String[] args) {
		System.out.println("enter size of the array");
		int size=inp.nextInt();
		int arr[]=new int[size];
		System.out.println("enter array elements");
		for(int i=0;i<arr.length;i++) {
			arr[i]=inp.nextInt();
		}
		System.out.println("element position ->");
		try {
			System.out.println(BinarySearch(arr,15,arr.length,0));

		}
		catch(ArrayIndexOutOfBoundsException e) {
			System.out.println(e);
		}
		
	//	System.out.println(BinarySearch(arr,5,arr.length,0));

	}
	static int  BinarySearch(int arr[],int se,int high,int low) {

		if(low>high) 
			return -1;
		if(arr[low]==se)
			return low;
		
		if(arr[high-1]==se)
			return high;
		
		int mid=(low+high)/2;
		if(arr[mid]==se)
			return mid;
		
		if(se>arr[mid])
			return BinarySearch( arr, se,high,mid+1);
		
		return BinarySearch(arr,se,mid-1,low);
	}
}