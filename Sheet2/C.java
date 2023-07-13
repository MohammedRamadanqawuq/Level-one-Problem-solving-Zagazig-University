import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.util.StringTokenizer;

/**
 *
 * @author Mohammed_Ramadan
 */
public class RegularBracketSequence {

    static MoIO input = new MoIO();// object from class Kattio for fast input
    static BufferedWriter log = new BufferedWriter(new OutputStreamWriter(System.out)); //  Buffer for fast output

    public static void main(String[] args) throws IOException {
        String s = input.next();
        int len = s.length();
        int counter = 0;
        //int counter2 = 0;
        //int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                counter++;
            } else {
                counter--;
            }
            if (counter < 0) {
                counter = 0;
                len--;
            }
        }

        log.write(len - counter + "\n");
        log.flush();

    }

}

// Class for Fast input 
class MoIO extends PrintWriter {

    private BufferedReader r;
    private StringTokenizer st;
    // standard input

    public MoIO() {
        this(System.in, System.out);
    }

    public MoIO(InputStream i, OutputStream o) {
        super(o);
        r = new BufferedReader(new InputStreamReader(i));
    }
    // USACO-style file input

    public MoIO(String problemName) throws IOException {
        super(problemName + ".out");
        r = new BufferedReader(new FileReader(problemName));
    }
    // returns null if no more input

    public String nextLine() {
        String str = "";
        try {
            str = r.readLine();
        } catch (IOException e) {
        }
        return str;
    }

    public String next() {
        try {
            while (st == null || !st.hasMoreTokens()) {
                st = new StringTokenizer(r.readLine());
            }
            return st.nextToken();
        } catch (IOException e) {
        }
        return null;
    }

    public int nextInt() {
        return Integer.parseInt(next());
    }

    public double nextDouble() {
        return Double.parseDouble(next());
    }

    public long nextLong() {
        return Long.parseLong(next());
    }
}
