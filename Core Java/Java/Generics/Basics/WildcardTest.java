class WildcardTest{

	interface Stack<V>{
		void push(V item);
		V pop();
		boolean empty();
	}

	static class SimpleStack<V> implements Stack<V>{
		
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
	}

	static class FiniteStack<V> implements Stack<V>{
	
		private int count;
		private V[] items;

		public FiniteStack(V[] store){
			items = store;
		}

		public void push(V item){
			items[count++] = item;
		}

		public V pop(){
			return items[--count];
		}

		public boolean empty(){
			return count == 0;
		}
	}

	private static void printStack(Stack<?> stack){
		for(int i = 0; !stack.empty(); ++i){
			if(i > 0) System.out.print(", ");
			System.out.print(stack.pop());
		}
		System.out.println();
	}

	public static void main(String[] args){
		SimpleStack<String> a = new SimpleStack<String>();
		a.push("monday");
		a.push("tuesday");
		a.push("wednesday");
		a.push("thursday");
		a.push("friday");
		FiniteStack<String> b = new FiniteStack<>(new String[12]);
		b.push("June");
		b.push("May");
		b.push("April");
		b.push("March");
		SimpleStack<Interval> c = new SimpleStack<>();
		c.push(new Interval(4, 31));
		c.push(new Interval(7, 42));
		c.push(new Interval(6, 13));
		c.push(new Interval(5, 24));
		c.push(new Interval(3, 55));
		SimpleStack<Object> d = new SimpleStack<>();
		d.push("sunday");
		d.push(new Interval(2, 30));
		d.push(12.3);
		printStack(a);
		printStack(b);
		printStack(c);
		printStack(d);
	}

}

