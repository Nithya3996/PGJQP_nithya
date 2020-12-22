import java.util.Scanner;
class SimpleInterest
{
public static void main(String[] args)
{
float p, r, t, sinterest;
Scanner sc = new Scanner(System.in);
System.out.print("Enter the Principal : ");
p = sc.nextFloat();
System.out.print("Enter the Rate of interest : ");
r = sc.nextFloat();
System.out.print("Enter the Time period : ");
t = sc.nextFloat();
sc.close();
sinterest = (p * r * t) / 100;
System.out.print("Simple Interest is: " +sinterest);
}
}