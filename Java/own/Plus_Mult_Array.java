package own;
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'plusMult' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts INTEGER_ARRAY A as parameter.
     * 块n = Τ碭计(n = 案计)
     * ︽块计
     */

	public static String plusMult(List<Integer> A) {
	    BigInteger even = BigInteger.valueOf(A.get(0));
	    BigInteger odd = BigInteger.valueOf(A.get(1));
	    boolean check = true;

	    for (int i = 2; i < A.size(); i++) {
	        BigInteger current = BigInteger.valueOf(A.get(i));
	        if (i % 2 == 0) {
	            if (check) {
	                even = even.multiply(current);
	            } else {
	                even = even.add(current);
	            }
	        } else {
	            if (check) {
	                odd = odd.multiply(current);
	                check = false;
	            } else {
	                odd = odd.add(current);
	                check = true;
	            }
	        }
	    }

	    even = even.mod(BigInteger.valueOf(2));
        odd = odd.mod(BigInteger.valueOf(2));

        if (even.compareTo(odd) > 0) {
            return "EVEN";
        } else if (even.compareTo(odd) < 0) {
            return "ODD";
        } else {
            return "NEUTRAL";
        }
	}

}

public class Plus_Mult_Array {

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        int ACount = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> A = IntStream.range(0, ACount)
            .mapToObj(i -> {
                try {
                    return Integer.parseInt(bufferedReader.readLine().trim());
                } catch (IOException ex) {
                    throw new RuntimeException(ex);
                }
            })
            .collect(Collectors.toList());

        String result = Result.plusMult(A);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
/*
	public class Solution {
		public static void main(String[] args) throws IOException {
			BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
			BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));
			
			int ACount = Integer.parseInt(bufferedReader.readLine().trim());
			
			List<Integer> A = IntStream.range(0, ACount).mapToObj(i -> {
			    try {
			        return bufferedReader.readLine().replaceAll("\\s+$", "");
			    } catch (IOException ex) {
			        throw new RuntimeException(ex);
			    }
			})
			    .map(String::trim)
			    .map(Integer::parseInt)
			    .collect(toList());
			
			String result = Result.plusMult(A);
			
			bufferedWriter.write(result);
			bufferedWriter.newLine();
			
			bufferedReader.close();
			bufferedWriter.close();
		}
	}
*/