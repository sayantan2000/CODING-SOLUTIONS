
public class find_min_max {

	public static void main(String[] args) {
		int arr[]= {5,4,3,21};
		findMin_Max(arr);

	}
	public static void findMin_Max(int arr[]) {
	int	min=arr[0];
	int	max=arr[0];
	for(int i=0;i<arr.length;i++) {
		if(arr[i]>max)
			max=arr[i];
		if(min>arr[i])
			min=arr[i];
	}
	System.out.println("Max value ->"+max);
	System.out.println("Min value ->"+min);
	}

}
