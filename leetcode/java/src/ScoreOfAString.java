// Solution sent to leetcode
class ScoreOfAString {
    public int scoreOfString(String s) {
        int count = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            int ascii = (int) s.charAt(i) - s.charAt(i + 1);
            count += Math.abs(ascii);
        }
        return count;
    }
}

// Solution developed and tested

//public class Main {
//
//    class Solution {
//        public static int scoreOfString(String s) {
//            int count = 0;
//            for (int i = 0; i < s.length() - 1; i++) {
//                int ascii = (int) s.charAt(i) - s.charAt(i + 1);
//                count += Math.abs(ascii);
//            }
//            System.out.println(count);
//            return count;
//        }
//    }
//
//    public static void main(String[] args) {
//        Solution.scoreOfString("zaz");
//    }
//}