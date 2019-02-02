import java.util.*;

class SetTest2{

	public static void main(String[] args){
		//Set<Interval> store = new TreeSet<>();
		Set<Interval> store = new TreeSet<>((x, y) -> x.seconds() - y.seconds());
		store.add(new Interval(4, 31));
		store.add(new Interval(3, 42));
		store.add(new Interval(7, 23));
		store.add(new Interval(6, 54));
		store.add(new Interval(5, 15));
		store.add(new Interval(2, 102));
		for(Interval i : store)
			System.out.println(i);
	}

}

