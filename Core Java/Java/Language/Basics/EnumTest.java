enum RoomType{
	ECONOMY, BUSINESS, EXECUTIVE, DELUXE;
}

class EnumTest{
	/*
	private static double getPayment(int stay, String room){
		float rate;
		switch(room){
			case "ECONOMY":
				rate = 725;
				break;
			case "BUSINESS":
				rate = 850;
				break;
			case "EXECUTIVE":
				rate = 950;
				break;
			default:
				rate = 1275;
		}
		return 1.05 * rate * stay;
	}
	*/

	private static double getPayment(int stay, RoomType room){
		float rate;
		switch(room){
			case ECONOMY:
				rate = 725;
				break;
			case BUSINESS:
				rate = 850;
				break;
			case EXECUTIVE:
				rate = 950;
				break;
			default:
				rate = 1275;
		}
		return 1.05 * rate * stay;
	}
	public static void main(String[] args){
		int s = Integer.parseInt(args[0]);
		//System.out.printf("Payment: %.2f%n", getPayment(s, "EKONOMY"));
		System.out.printf("Payment: %.2f%n", getPayment(s, RoomType.ECONOMY));
	}

}

