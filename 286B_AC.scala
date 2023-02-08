import java.util.Scanner
import scala.io.StdIn 
import scala.io.Source.stdin 


object Main extends App{

    var sc = new Scanner(System.in)
    var N = sc.nextInt()
    var S : String = sc.next 

    var T : String = ""
    var i = 0;
    while( i < S.size) {
        if (i == S.size-1) {
            T += S(i)
        }
        else if (S(i) == 'n' && S(i+1) == 'a') {
            T += "nya"
            i += 1
        }
        else {
            T += S(i)
        }
        i += 1
    }
    println(T)
}