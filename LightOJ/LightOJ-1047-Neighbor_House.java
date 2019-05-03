/*
Problem Link: http://lightoj.com/volume_showproblem.php?problem=1047
Concept Needed: DP

Learn DP then hopefully you will be able to understand the code.
Happy coding.
*/

import java.util.*;
public class Main {
	
	static int cost[][] = new int[21][4];
	static int dp[][] = new int[21][4];
	
	static int calculate(int n, int count, int pre)
	{
		if(count>n)return  0;
		
		int val1=Integer.MAX_VALUE, val2=Integer.MAX_VALUE, val3=Integer.MAX_VALUE;
		if(pre!=1)
		{
			if(dp[count][1]!=-1)val1 =  dp[count][1];
			else val1 = cost[count][1]+ calculate(n, count+1, 1);
			dp[count][1]= val1;
		}
		if(pre!=2)
		{
			if(dp[count][2]!=-1)val2 =  dp[count][2];
			else val2 = cost[count][2]+ calculate(n, count+1, 2);
			dp[count][2]= val2;
		}
		if(pre!=3)
		{
			if(dp[count][3]!=-1)val3 =  dp[count][3];
			else val3 = cost[count][3]+ calculate(n, count+1, 3);
			dp[count][3]= val3;
		}
		
		return  Math.min(Math.min(val1, val2), val3);
		
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
			for(int i=1; i<=n; i++)
				for(int j=1;j<=3;j++) cost[i][j] = sc.nextInt();

			int ans =calculate(n,1,0) ;
			System.out.println("Case "+tc+": "+ans);

			for(int[] row: dp)
				Arrays.fill(row, -1);
		}
		
	}
	
}

