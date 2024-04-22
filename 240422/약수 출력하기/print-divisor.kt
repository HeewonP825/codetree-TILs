import kotlin.math.sqrt

fun main() {
    val n = readLine()!!.toInt()

    val sqrtN = sqrt(n.toDouble()).toInt()

    for (i in 1..sqrtN) {
        if (n % i == 0) {
            print("$i ")
        }
    }

    for (i in sqrtN downTo 1) {
        if (n % i == 0 && i != n / i) { 
            print("${n / i} ")
        }
    }
}