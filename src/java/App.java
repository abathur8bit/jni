/**
 * Hello world using a Java Native Interface call.
 *
 * Compile Java: javac -d . src/java/App.java
 * Run app     : java -Djava.library.path=. App
 */
public class App 
{
    public native int add(int n);
    public native int print(String msg);

    public static void main( String[] args )
    {
    	App app = new App();
    	System.loadLibrary("jni");
        int n = app.add(21);
        System.out.println( "Hello World, the answer is "+n+".");
        app.print("The quick brown fox jumps over the lazy dog.");
    }
}
