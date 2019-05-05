/*
Problrm Link: http://lightoj.com/volume_showproblem.php?problem=1011
Concept Needed: Bitwise operations, Bitmask DP.
Concept Link: Google it. There is plenty of tutorial available.
              
Learn Bitmask DP then hopefully you will be able to understand the code.
Happy coding.
*/
import java.util.*;
public class Main {
	
	static int point[][] = new int[16][16];
	static int dp[][] = new int[16][(1<<16)+1];
	
	static int calculate(int n, int count, int mask)
	{
		if(count>=n) return 0;
		if(dp[count][mask] != -1) return dp[count][mask];

		for(int i=0; i<n; i++)
		{
			if(((1<<i) & mask) == 0)
				dp[count][mask] = Math.max(dp[count][mask], point[count][i] + calculate(n,count+1, mask | (1<<i)) );
		}
		return  dp[count][mask];
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

