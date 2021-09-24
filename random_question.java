import java.util.HashMap;
import java.io.*;

public class random_question {
	public static void add_recursive(HashMap<String,Integer> map) throws IOException {
	InputStreamReader io=new InputStreamReader(System.in);
	BufferedReader br=new BufferedReader(io);
		if(map.isEmpty()==true) {
			System.out.print("input value");
			String input=br.readLine();
			map.put(input, 1);
		}
		System.out.println(map);
		
	}

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
HashMap<String, Integer> map=new HashMap<>();
add_recursive(map);

	}

}
