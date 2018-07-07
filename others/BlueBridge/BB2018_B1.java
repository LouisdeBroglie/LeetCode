package test123;

public class BB2018_B1 {
	public static void main(String[] args) {
		int cnt = 0;
		for(int i=10;i<100;i++){
			for(int j=10;j<100;j++){
				int a = i%10;
				int b = i/10;
				int c = j%10;
				int d = j/10;
				if((2*(a+b)==j)&&(i==3*(c+d))){
					cnt++;
				}
			}
		}
		System.out.println(cnt);
	}
}
