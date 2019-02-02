package shopping;

class Store{

	static int find(String item){
		String[] items = {"apple", "mango", "orange", "peach", "pear"};
		return java.util.Arrays.binarySearch(items, item);
	}

	static double priceOf(int id){
		double[] prices = {22.0, 25.0, 9.0, 8.0, 7.0};
		return prices[id];
	}

	static int stockOf(int id){
		int[] stocks = {200, 300, 400, 350, 150};
		return stocks[id];
	}

}


