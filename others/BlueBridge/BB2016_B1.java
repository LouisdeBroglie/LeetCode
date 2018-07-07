package test123;

public class BB2016_B1 {
	public static void main(String[] args){
		int sum = 0;
		for(int i=1;i<=100;i++){
			sum+=(i+1)*i/2;
		}
		System.out.println(sum);
	}
}
