import java.util.stream.*;

class ParallelStreamTest{

	private static long processValue(int value){
		System.out.printf("Processing value %d in worker<%x>%n", value, Thread.currentThread().hashCode());
		Worker.doWork(value);
		return value * value;
	}

	public static void main(String[] args) throws Exception{
		long r = IntStream.range(1, 21)
						  .parallel()
						  .mapToLong(ParallelStreamTest::processValue)
						  .sum();
		System.out.printf("Result = %d%n", r);
	}

}

