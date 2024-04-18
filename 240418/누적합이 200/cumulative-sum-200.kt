fun main() {
    val num = readLine()!!.toInt()
    val array = IntArray(num)

    val input = readLine()!!.split(" ").map { it.toInt() }

    var sum = 0
    for (i in 0 until num) {
        array[i] = input[i]
        sum += array[i]
        if(sum > 200) {
            println(sum)

            val average = sum.toDouble() / (i+1)
            println("%.1f".format(average))

            return
        }
    }
}