class GCTest{

	static class SomeResource implements AutoCloseable{
	
		private String id;

		static{
			System.out.println("SomeResource class initialized");
		}

		public SomeResource(String name){
			id = name;
			System.out.printf("%s resource acquired%n", id);
		}

		public void consume(int action){
			if(id != null){				
				System.out.printf("%s resource consumed using action %d%n", id, action);
			}
		}

		public void close(){
			if(id != null){
				System.out.printf("%s resource released%n", id);
				id = null;
			}
		}

		public void finalize(){
			close();
		}
	}

	private static void run(){
		SomeResource a = new SomeResource("first");
		a.consume(1);
	}

	private static void run(String action){
		try(SomeResource c = new SomeResource("third")){
			c.consume(Integer.parseInt(action));
		}
	}

	public static void main(String[] args){
		run();
		SomeResource b = new SomeResource("second");
		b.consume(2);
		b.close();
		System.gc();
		try{
			run(args[0]);
		}catch(Exception e){}
	}

}

