import java.util.*;

public class no10872 {
    public static void main(String[] args){
        int n;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        int ans = 1;
        n += 1;
        while(--n!=0){
            ans *= n;
        }
        System.out.println(ans);
    }
}