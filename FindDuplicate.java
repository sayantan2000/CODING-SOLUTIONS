import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;



public class FindDuplicate {

	public static void main(String[] args) {
		
FindDuplicate("  ");
FindDuplicate(null);
FindDuplicate("Radio Jockey");
FindDuplicate("aA");
FindDuplicate("A");
FindDuplicate("null");
	}
	
	public static void  FindDuplicate(String str) {
		
		if(str==null) {
				System.out.println("NULL string");
				return;
			}
		
		if(str.length()<=1) {
			System.out.println("a single charecter");
			return ;}
		if(str.isEmpty()) {
			System.out.println("empty string");
			return;
		}
		char [] arr=str.toCharArray();
		Map<Character,Integer> charmap=new HashMap<Character,Integer>();
	
		for(char c:arr) {
			if(charmap.containsKey(c)) {
				charmap.put(c, charmap.get(c)+1);
		}
			else {
				charmap.put(c, 1);
			}
		}
	System.out.println((charmap.toString()));
		//set of hashmap for getting the maximum counto fthat charrecter map::::
	
	
		Set<Map.Entry<Character,Integer>> chrmp=charmap.entrySet();
		for(Map.Entry<Character,Integer > entry:chrmp) {
			if(entry.getValue()>1) {
				System.out.println(entry.getKey()+":"+entry.getValue());
			}
		}
		
		
	}

}
