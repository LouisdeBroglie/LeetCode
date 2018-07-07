package test123;

public class BB2018_B2 {
	private static boolean f[] = new boolean[1010];

	public static void main(String[] args) {
		int ans = 0;
		for(int i=3;i<=1000;i+=3){
			f[i]=!f[i];
		}
		for(int i=5;i<=1000;i+=5){
			f[i]=!f[i];
		}
		for(int i=7;i<=1000;i+=7){
			f[i]=!f[i];
		}
		for(int i=1;i<=1000;i++){
			if(f[i]==false){
				ans++;
			}
		}
		System.out.println(ans);
		System.out.println("no");
	}
}
