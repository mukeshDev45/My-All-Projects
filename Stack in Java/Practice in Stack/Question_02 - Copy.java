
// Question 02
// Reverse a String using a Stack?

import java.util.Stack;

public class Question_02 {

  public static void pushAtBottom(Stack<Integer> s, int data) {
        if(s.isEmpty()) {
            s.push(data);
            return;

        }
        int top = s.pop();
        pushAtBottom(s, data);
        s.push(top);
    }

    public static void reverseString(String str) {
       Stack<Character> s = new Stack<>();
       int idx = 0;
       while(idx < str.length()) {
        s.push(str.charAt(idx));
        idx++;
       }
     }
    public static void main(String[] args) {
        
    }
}
