/**
 * 
 * @author MOHOR
 *finds 2nd largest element in an array;
 */
public class FIND_2NDLASRGEST_ELE {

	public static void main(String[] args) {
		int arr[]= {5,4,78,98};
		find2ndlargest(arr);

	}
	public static void find2ndlargest(int arr[]) {
		int max=arr[0],sec_max=arr[0];
		
		for(int i=0;i<arr.length;i++) {
			if(arr[i]>max) {
				max=arr[i];
				if(sec_max>max) {
					sec_max=max;
					if(sec_max>=max) {
						sec_max=arr[i-1];
					}
				}
				
			
			}
			
		}
		System.out.println(sec_max);
	}

}
