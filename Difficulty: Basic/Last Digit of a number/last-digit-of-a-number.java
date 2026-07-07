import java.util.*;

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int res = n%10;
        
        if(res>=0){
            System.out.print(res);
        }
        else
        {
            System.out.print(-1 * res);
        }

        // code here
        
    }
}