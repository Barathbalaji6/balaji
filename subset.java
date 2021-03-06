import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class ReverseWords {

public static void main(String[] args) throws IOException {

    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    System.out.println("Enter the string");
    String s = br.readLine();

    String rever = StringRev(s);

    System.out.println(rever);

}

private static String StringRev(String s) 
{

    char[] modString = new char[s.length()];

    for (int i = 0; i < s.length(); i++) 
    {
        modString[i] = s.charAt(s.length() - 1 - i);
    }

    s = s.copyValueOf(modString);
    String reverseWord = "";
    String eachWord;
    for (String part : s.split(" ")) 
    {
        eachWord = new StringBuilder(part).reverse().toString();
        reverseWord = reverseWord + eachWord + " ";
    }

    return reverseWord;

  }

}
