import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Solution {
  private static final Scanner in = new Scanner(System.in);
  public static void main (String[] args) {
    int n = in.nextInt();
    int c[] = new int[n];
    for (int i = 0; i < n; i++)
      c[i] = in.nextInt();
    int count = 0;
    int i = 0;
    while (i < n - 1) {
      if (i < n - 2 && c[i + 2] == 0)
        i++;
      count++;
      i++;
    }
    System.out.println(count);
  }
}
