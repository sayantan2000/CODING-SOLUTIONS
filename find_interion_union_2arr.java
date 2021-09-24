import java.util.HashMap;
import java.util.Map;

/**
 * 
 * find intersection and union of given 2 arrays;
 */
public class find_interion_union_2arr {
	public static void main(String[] args) {
		int a[] = { 1, 2, 5, 6, 2, 3, 5 };
	    int b[] = { 2, 4, 5, 6, 8, 9, 4, 6, 5 };
	    find_intersec_uni(a, a);
		
	}
	public static void find_intersec_uni(int arr[],int arr2[]) {
		Map<Integer,Integer> map=new HashMap<Integer,Integer>();
		
		for(int i=0;i<arr.length;i++) {
			map.put(arr[i], i);
		}
		for(int i=0;i<arr2.length;i++) {
			map.put(arr2[i], i);
		}
		
		for(Map.Entry mapele:map.entrySet()) {
		
			System.out.print(mapele.getKey()+" ");
		}
	}

}
