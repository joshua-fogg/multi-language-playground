public class Print {

 public static void Main(string[] args) {
  int count = int.Parse(args[1]);
  
  for (int i = 0; i < count; i++) {
   System.Threading.Thread.Sleep(1000);
   System.Console.WriteLine("Joshua Fogg");
  };
 }

}