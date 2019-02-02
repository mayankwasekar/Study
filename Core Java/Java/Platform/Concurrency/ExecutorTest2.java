import java.util.concurrent.*;

class ExecutorTest2{

	static class Computation implements Callable<Long>{
		
		private int low, high;

		public Computation(int low, int high){
			this.low = low;
			this.high = high;
		}

		public Long call(){
			long sum = 0;
			for(int i = low; i <= high; ++i){
				Worker.doWork(i);
				sum += i * i;
			}
			return sum;
		}
	}

	public static void main(String[] args) throws Exception{
		System.out.print("Please wait...");
		Computation c = new Computation(1, 20);
		//long r = c.call();
		ExecutorService pool = Executors.newSingleThreadExecutor();
		Future<Long> job = pool.submit(c);
		while(!job.isDone()){
			System.out.print(".");
			Thread.sleep(300);
		}
		long r = job.get();
		System.out.println("done!");
		System.out.printf("Result = %d%n", r);
		pool.shutdown();
	}

}

