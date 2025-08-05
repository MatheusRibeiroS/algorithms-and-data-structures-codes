/* 1108. Defanging an IP Address */

// Solution sent to leetcode
class Solution {
    public String defangIPaddr(String address) {
        StringBuilder list = new StringBuilder();
        for (int i = 0; i < address.length(); i++) {
            if (address.charAt(i) == '.') {
                list.append('[');
                list.append('.');
                list.append(']');
            } else {
                list.append(address.charAt(i));
            }
        }
        return list.toString();
    }
}

// Solution developed and tested

//public class DefangingAnIPAddress {
//
//    static class Solution {
//        public static String defangIPaddr(String address) {
//
//            StringBuilder list = new StringBuilder();
//            for (int i = 0; i < address.length(); i++) {
//                if (address.charAt(i) == '.') {
//                    list.append('[');
//                    list.append('.');
//                    list.append(']');
//                } else {
//                    list.append(address.charAt(i));
//                }
//            }
//            return list.toString();
//        }
//    }
//
//    public static void main(String[] args) {
//        Solution.defangIPaddr("255.100.50.0");
//    }
//}
