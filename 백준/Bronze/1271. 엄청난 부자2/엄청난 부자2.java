import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String inputLine = br.readLine();
        
        StringTokenizer st = new StringTokenizer(inputLine);
        
        BigInteger n = new BigInteger(st.nextToken());
        BigInteger m = new BigInteger(st.nextToken());
        
        BigInteger[] result = n.divideAndRemainder(m);
        
        System.out.println(result[0]);
        
        System.out.println(result[1]);
        
        br.close();
    }
}