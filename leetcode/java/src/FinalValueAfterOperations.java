/* 2011. Final Value of Variable After Performing Operations */

import java.util.Objects;

// Solution sent to leetcode
class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int counter = 0;
        for (int i = 0; i < operations.length; i++) {
            if (Objects.equals(operations[i], "++X") || Objects.equals(operations[i], "X++")) {
                counter++;
            } else {
                counter--;
            }
        }
        return counter;
    }
}

// Solution developed and tested

//public class FinalValueAfterOperations {
//    public static int finalValueAfterOperations(String[] operations) {
//        int counter = 0;
//        for (int i = 0; i < operations.length; i++) {
//            if (Objects.equals(operations[i], "++X") || Objects.equals(operations[i], "X++")) {
//                counter++;
//            } else {
//                counter--;
//            }
//        }
//        return counter;
//    }
//
//    public static void main(String[] args) {
//        //Test 1
//        //String[] mock = {"--X","X++","X++"};
//        // Test 2
//        String[] mock = {"X++", "++X", "--X", "X--"};
//        finalValueAfterOperations(mock);
//    }
//}
