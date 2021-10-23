import java.util.Scanner;
public class Main
{
    public void check(String name[],int k)
    {
        String s,s1;
        int temp=0;
        String res[]=new String[k];
        for(int j=0;j<k;j++)
        {
            s=name[j];
            temp=0;
            for(char i='a';i<='z';i++)
            {
                if(s.contains(String.valueOf(i)))
                temp++;
            }
            if(temp==26)
            res[j]="Pass";
            else
            res[j]="Fail";
            
        }
        for(int i=0;i<k;i++)
        {
            System.out.println(res[i]);
        }
    }
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    Main ob=new Main();
	    int n=sc.nextInt();
	    String sen[]=new String[n];
	    for(int i=0;i<n;i++)
	    {
	        sen[i]=sc.next();
	    }
	    ob.check(sen,n);
	}
}
