import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        if (n == 0 || n == 1) {
            System.out.println(1);
            return;
        }

        System.out.println(solve(1, n));
    }

    public static BigInteger solve(int start, int end) {
        if (start == end) {
            return BigInteger.valueOf(start);
        }
        
        if (end - start == 1) {
            return BigInteger.valueOf(start).multiply(BigInteger.valueOf(end));
        }

        int mid = (start + end) / 2;
        BigInteger left = solve(start, mid);
        BigInteger right = solve(mid + 1, end);

        return left.multiply(right);
    }
}