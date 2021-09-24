import java.util.Arrays;

/**
 * send all negetive elements in another side of the array
 */
public class rearrange_negetive_ele_arr {

	public static void main(String[] args) {
		int arr[]= {56,69,25,69,-5,-4,-78,-9};
		//Arrays.sort(arr);
	//	print_arr(arr);
		rearrange(arr);
	}
	public static void rearrange(int arr[]) {
		int temp,j;
		temp=j=0;
		for(int i=0;i<arr.length;i++) {
			if(arr[i]<0) {
				if(j!=i) {
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
				j++;
			}
		}
		print_arr(arr);
	}
	public static void print_arr(int arr[]) {
		
			System.out.println(Arrays.toString(arr));
		
	}

}
