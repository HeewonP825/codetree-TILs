fun main() {
    val n = readLine()!!.toInt()

    for (i in 1..n) {
        if (n % i == 0) {
            print("$i ")
        }
    }
}