import java.util.*;

class MapTest1{

	public static void main(String[] args){
		Map<String, Interval> store = new HashMap<>();
		store.put("monday", new Interval(4, 31));
		store.put("tuesday", new Interval(3, 42));
		store.put("wednesday", new Interval(7, 23));
		store.put("thursday", new Interval(6, 54));
		store.put("friday", new Interval(5, 15));
		store.put("monday", new Interval(2, 31));
		for(Map.Entry<String, Interval> e : store.entrySet())
			System.out.printf("%s\t%s%n", e.getValue(), e.getKey());
		Scanner input = new Scanner(System.in);
		System.out.print("Key: ");
		String key = input.next();
		Interval val = store.get(key);
		if(val != null)
			System.out.printf("Value = %s%n", val);
	}

}

