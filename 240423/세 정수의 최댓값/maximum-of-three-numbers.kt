fun main() {
    val n = readLine()!!.split(" ").map { it.toInt() }

    var max = Int.MIN_VALUE
    for (num in n) {
        if (num >= max) {
            max = num
        }
    }

    println(max)
}