/*
	Concept Needed: Segment Tree.
*/
import java.util.*;
import java.io.*;
import java.util.Scanner;
import java.util.Collections;
 
public class Main
{
    static FI in  = new FI(System.in);
    static FO out = new FO();
 
    static int mx=100001;
    static int[] arr= new int[mx];
    static int[] tree= new int[mx*3];
    static void maketree(int node,int b,int e)
    {
        if(b==e)
        {
            tree[node]=arr[b];
            return;
        }
        int left=node*2, right=node*2+1, mid=(b+e)/2;
        maketree(left,b,mid);
        maketree(right,mid+1,e);
        tree[node]=tree[left]+tree[right];
    }
 
    static int query(int node,int b,int e,int i,int j)
    {
        if(i>e||j<b) return 0;
        if(b>=i&&e<=j) return tree[node];
 
        int left=node*2, right=node*2+1, mid=(b+e)/2;
        int p1= query(left,b,mid,i,j);
        int p2= query(right,mid+1,e,i,j);
        return p1+p2;
    }
 
    static void update(int node,int b,int e,int i,int newvalue,int t)
    {
        if(i>e||i<b) return;
        if(b>=i&&e<=i)
        {
            if(t==1)
            {
                out.println(tree[node]);
                tree[node]=newvalue;
            }
            else tree[node]+=newvalue;
            return ;
        }
 
        int left=node*2, right=node*2+1, mid=(b+e)/2;
        update(left,b,mid,i,newvalue,t);
        update(right,mid+1,e,i,newvalue,t);
        tree[node]=tree[left]+tree[right];
 
    }
 
//  **--------------main-------------------------**
 
    public static void  main(String arg[])
    {
        int tc;
        tc=in.nextInt();
        for(int i=1;i<=tc;i++)
        {
            out.println("Case " + i + ":");
            int n,q;
            n=in.nextInt();
            q=in.nextInt();
            for (int j=1;j<=n;j++)arr[j]=in.nextInt();
            maketree(1,1,n);
            for (int j=1;j<=q;j++)
            {
                int t;
                t=in.nextInt();
                if(t==1)
                {
                    int s;
                    s=in.nextInt();
                    update(1,1,n,s+1,0,t);
                }
                else if(t==2)
                {
                    int val,pos;
                    pos=in.nextInt();
                    val=in.nextInt();
                    update(1,1,n,pos+1,val,t);
                }
                else
                {
                    int s,e;
                    s=in.nextInt();
                    e=in.nextInt();
                    out.println(query(1,1,n,s+1,e+1));
                }
            }
            out.flush();
        }
    }
 
//**----------------------------------------------------------------------------------------------------------------------------------------------------------------------**
//**======================================================================================================================================================================**
//**----------------------------------------------------------------------------------------------------------------------------------------------------------------------**
 
    public static class FI
    {
        InputStream in;
        byte b; byte[] buf;
        int bi, bz;
        FI(InputStream I)
        {
            in=I; buf=new byte[65536]; bi=bz=0; read();
        }
        void skip() { while (b >= 0 && b <= 32) read(); }
        void read() {
            if (bi==bz) {
                bi=0; try { bz=in.read(buf); } catch(Exception e) { bz=-1; } }
            b = bz == -1 ? -1 : buf[bi++];  }
        // Optional methods
        boolean hasNext() { skip(); return b >= 0; }
        String next()
        {
            StringBuilder sb = new StringBuilder();
            for (skip(); b > 32; read()) sb.append((char)b);
            return sb.length() == 0 ? null : sb.toString();
        }
        int nextInt()
        {
            int i=0; boolean s=false; skip();
            if (b == '-') { s=true; read(); }
            for (; b > 32; read()) i = i*10 + b-48; return s ? -i : i;
        }
        long nextLong()
        {
            long i=0; boolean s=false; skip();
            if (b == '-') { s=true; read(); }
            for (; b > 32; read()) i = i*10 + b-48; return s ? -i : i;
        }
        String nextLine()
        {
            StringBuilder sb = new StringBuilder();
            for (; b != 10 && b != 13; read()) sb.append((char)b);
            while (b == 10 || b == 13) read(); return sb.toString();
        }
        String nextRealLine()
        {
            StringBuilder sb = new StringBuilder();
            for (; b != 10 && b != 13; read()) sb.append((char)b);
            byte p = b; read();
            if ((p == 10 && b == 13) || (p == 13 && b == 10)) read();
            return sb.toString();
        }
    }
 
    public static class FO extends PrintWriter
    {
        FO() { super(new BufferedOutputStream(System.out)); }
    }
}