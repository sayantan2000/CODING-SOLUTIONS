import java.util.Arrays;

public class findKth_samllest_element {

	public static void main(String[] args) {
		int arr[]= {11,10,9,8,7,58,8,9,966};
System.out.println("K'th smallest element is "+kthSmallestele(arr, 6));
		//find_2nd_largest_ele(arr);
	}
	public static int kthSmallestele(int []arr,int k) {
		 Arrays.sort(arr);

		return arr[k-1];
	}


}
