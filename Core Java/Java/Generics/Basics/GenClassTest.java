class GenClassTest{

	static class SimpleStack<V>{
		
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

	public static void main(String[] args){
		SimpleStack<String> a = new SimpleStack<String>();
		a.push("monday");
		a.push("tuesday");
		a.push("wednesday");
		a.push("thursday");
		a.push("friday");
		//a.push(12.3);
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
		while(!a.empty())
			System.out.println(a.pop());
		System.out.println("----------------------------");
		while(!c.empty())
			System.out.println(c.pop());
		System.out.println("----------------------------");
		while(!d.empty())
			System.out.println(d.pop());
	}

}

