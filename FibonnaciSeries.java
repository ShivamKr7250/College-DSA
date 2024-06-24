import java.util.Scanner;

public class FibonnaciSeries {
    public static void main(String[] arges){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the First and Second Number");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        System.out.println("Enter the Limit of Fibonnacai Series");
        int limit = sc.nextInt();

        for(int i =0; i< limit; i++){
            int sum = num1 +num2;
            System.out.println(sum);
            num1 = num2;
            num2=sum;
        }
    }
}
