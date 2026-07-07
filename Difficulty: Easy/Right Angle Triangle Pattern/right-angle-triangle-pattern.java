import java.util.Scanner;

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        // code here
        int star = 1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=star;j++){
                System.out.print("* ");
            }
            star++;
            System.out.println();
        }

        sc.close();
    }
}