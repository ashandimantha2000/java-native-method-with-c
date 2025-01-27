public class JNIDemo {
    //declaration of native method
    public native void printText(int a, int b);

    //load the library that contains the native method implementation
    static {
        System.loadLibrary("JNIDemo");
    }

    public static void main(String[] args){
        //create an object of the 'JNIDemo' class
        JNIDemo demo = new JNIDemo();
        demo.printText(3, 5);
    }
}
