import java.util.*;

class ListTest2{

	public static void main(String[] args){
		List<Interval> store = new LinkedList<>();
		store.add(new Interval(4, 31));
		store.add(new Interval(3, 42));
		store.add(new Interval(7, 23));
		store.add(new Interval(6, 54));
		store.add(new Interval(5, 15));
		for(Interval i : store)
			System.out.println(i);
		System.out.printf("Third Interval = %s%n", store.get(2));
	}

}

