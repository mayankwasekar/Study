import java.util.concurrent.*;

class ForkJoinTest{

	static class Computation extends RecursiveTask<Long>{
		
		private int low, high;

		public Computation(int low, int high){
			this.low = low;
			this.high = high;
		}

		public Long compute(){
			if(high - low >= 5){
				int mid = (low + high) / 2;
				Computation left = new Computation(low, mid);
				Computation right = new Computation(mid + 1, high);
				right.fork();
				return left.compute() + right.join();
			}
			long sum = 0;
			for(int i = low; i <= high; ++i){
				System.out.printf("Processing value %d in worker<%x>%n", i,  Thread.currentThread().hashCode());
				Worker.doWork(i);
				sum += i * i;
			}
			return sum;
		}
	}

	public static void main(String[] args) throws Exception{
		ForkJoinPool pool = new ForkJoinPool();
		Computation c = new Computation(1, 20);
		long r = pool.invoke(c);
		System.out.printf("Result = %d%n", r);
	}

}

