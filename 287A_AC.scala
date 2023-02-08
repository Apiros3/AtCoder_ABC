import java.util.Scanner
import scala.io.StdIn 
import scala.io.Source.stdin 


object Main extends App{

    var sc = new Scanner(System.in)
    var N = sc.nextInt()
    var A : Array[String] = Array.fill(N)(sc.next())     
    var cnt = 0
    for( i <- 0 until A.size) {
        if (A(i) == "Against") cnt += 1
    }
    if (A.size/2 < cnt) {
        println("No")
    }
    else {
        println("Yes")
    }
}