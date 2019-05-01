
/*
Problem link: http://lightoj.com/volume_showproblem.php?problem=1005
Concept needed:Rook polynomial.
Concept link: https://en.wikipedia.org/wiki/Rook_polynomial

This is a Dynamic Programming problem with Combinatiorics concept. The solutio must contain k<=n or it is impossible to state k rooks 
in the board. So we have to find that if k is less than or equal to n or the solution will be Zero.
The solution can be formulated as:-  nCk*nCk*k!. 

Formula:  nCk*nCk*k is defined as below:-
        First, the number of way we can choose k rows from n is  nCk.
        Second, the number of way we can choose k column from n is also  nCk.
        So, the total number of choice of grid is : number of row choice * number of column choice
                                                  = nCk*nCk
        Now, for each choice k rooks can arrange themselvs k! ways.
        So, the total no. of way of placement is: nCk*nCk*k!. 
        
  For better understanding you may visit link: https://en.wikipedia.org/wiki/Rook_polynomial 
  Happy Coading.
*/
import java.util.*;
public class Main {
    static long nck[][]=new long[31][31];
    static long factorial[]=new long[31];
   
    static  void  calculate_nck(int n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(i==j)nck[i][j]=1;
                else if(j==1)nck[i][j]=i;
                else nck[i][j]=nck[i-1][j]+nck[i-1][j-1];
//              System.out.print(nck[i][j]+" ");
            }
//          System.out.println();
        }
       
    }
    static void  calculate_factorial(int n)
    {
        factorial[1]=1;
        for(int i=2;i<=n;i++)
            factorial[i]=factorial[i-1]*i;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        calculate_factorial(20);
        calculate_nck(30);
       
        int  tc,n,k;
        tc = sc.nextInt();
       
        for(int i=1;i<=tc;i++)
        {
            n = sc.nextInt();
            k = sc.nextInt();
            long ans;
            if(k>n)ans=0;
            else if(k==0) ans=1;
            else ans = nck[n][k]*nck[n][k]*factorial[k];
           
            System.out.println("Case "+i+": "+ans);
        }
       
    }
   
}
 
