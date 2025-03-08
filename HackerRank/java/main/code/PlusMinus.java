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
     * Complete the 'plusMinus' function below.
     *
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static void plusMinus(List<Integer> arr) {
        int n = arr.size();

        int[] result = {0, 0, 0};

        for (Integer integer : arr) {
            if (integer > 0) {
                result[0] += 1;
            } else if (integer < 0) {
                result[1] += 1;
            } else {
                result[2] += 1;
            }
        }

        System.out.printf("%.5f\n", result[0] / (double) n);
        System.out.printf("%.5f\n", result[1] / (double) n);
        System.out.printf("%.5f", result[2] / (double) n);
    }

}

public class PlusMinus {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                .map(Integer::parseInt)
                .collect(toList());

        Result.plusMinus(arr);

        bufferedReader.close();
    }
}
