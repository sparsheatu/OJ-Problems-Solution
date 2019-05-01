/*
Problrm Link: http://lightoj.com/volume_showproblem.php?problem=1011
Concept Needed: Bitwise operations, Digit DP
Concept Link: http://shakilcompetitiveprogramming.blogspot.com/2015/09/digit-dp.html
              https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/
              
Learn Digit DP then hopefully you will be able to understand the code.
Happy coding.
*/
import java.util.*;
public class Main {
	
	static int point[][] = new int[16][16];
	static int dp[][] = new int[16][(1<<16)+1];
	
	static int calculate(int n, int count, int flag)
	{
		if(count>=n) return 0;
		if(dp[count][flag] != -1) return dp[count][flag];

		for(int i=0; i<n; i++)
		{
			if(((1<<i) & flag) == 0)
				dp[count][flag] = Math.max(dp[count][flag], point[count][i] + calculate(n,count+1, flag | (1<<i)) );
		}
		return  dp[count][flag];
	}
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for(int[] row: dp)
			Arrays.fill(row, -1);

		for(int tc=1; tc<=T; tc++)
		{
			int n;
			n = sc.nextInt();
			for(int i=0; i<n; i++)
				for(int j=0;j<n;j++) point[i][j] = sc.nextInt();

			int ans = calculate(n,0,1>>17);
			System.out.println("Case "+tc+": "+ans);

			for(int[] row: dp)
				Arrays.fill(row, -1);
		}
		
	}
	
}

