import java.util.Iterator;

class IterationTest{

	static class SimpleStack<V> implements Iterable<V>{
		
		private Node top;

		class Node{
		
			V value;
			Node below;

			Node(V element){
				value = element;
				below = top;
			}
		}

		public void push(V item){
			top = new Node(item);
		}

		public V pop(){
			Node node = top;
			top = top.below;
			return node.value;
		}

		public boolean empty(){
			return top == null;
		}

		public Iterator<V> iterator(){
			return new Iterator<V>(){
				private Node current = top;

				public boolean hasNext(){
					return current != null;
				}

				public V next(){
					V result = current.value;
					current = current.below;
					return result;
				}
			};
		}
	}

	public static void main(String[] args){
		int[] a = {123, 234, 345, 456};
		System.out.println("All integers in array");
		for(int i : a)
			System.out.println(i);
		SimpleStack<Interval> c = new SimpleStack<>();
		c.push(new Interval(4, 31));
		c.push(new Interval(7, 42));
		c.push(new Interval(6, 13));
		c.push(new Interval(5, 24));
		c.push(new Interval(3, 55));
		System.out.println("All Intervals on stack");
		for(Interval i : c)
			System.out.println(i);
	}

}

