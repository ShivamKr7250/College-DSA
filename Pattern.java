public class Pattern{
    public static void main(String[] args){
        int row = 1;
        int n =4;
        while(row <=4){
            int star = n - row +1;
            while(star > 0) {
                System.out.print("*");
                star--;
            }
            System.out.println("");
            row++;
        }
    }
}