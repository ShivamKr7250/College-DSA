import java.util.*;

public class SwapNum {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        System.out.println("Number Before Swaping");
        System.out.println(num1);
        System.out.println(num2);

        num1 = num2 +num1;
        num2= num1 - num2;
        num1 = num2 -num1;

        System.out.println("Number After Swaping");
        System.out.println(num1);
        System.out.println(num2);

    }
}
