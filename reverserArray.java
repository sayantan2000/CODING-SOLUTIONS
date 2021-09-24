
public class reverserArray {

public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[]= {5,4,7,8,9,68,78};
		reversearray(arr);
}

	
public static void reversearray(int arr[]) {
	System.out.print("{");
	for(int i=arr.length-1;i>=0;i--) {
		System.out.print(arr[i]+",");
	}
	System.out.println("}");
}
}

