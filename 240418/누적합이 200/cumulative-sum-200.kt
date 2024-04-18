fun main() {
    val num = readLine()?.toIntOrNull() ?: return
    val input = readLine()?.split(" ")?.map { it.toIntOrNull() } ?: return

    val array = IntArray(num) { 0 }
    var sum = 0

    for (i in 0 until num) {
        array[i] = input[i] ?: return
        sum += array[i] ?: return

        if (sum > 200) {
            println(sum)

            val average = sum.toDouble() / (i + 1)
            println("%.1f".format(average))
            
            return
        }
    }
}