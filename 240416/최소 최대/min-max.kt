fun main() {
    val n = readLine()!!.toInt()
    val input = readLine()!!.split(" ").map { it.toInt() }
    val array = input.toIntArray()

    var min = array[0]
    var max = array[0]
    
    for (j in 0 until n) {
        if (array[j] > max) {
            max = array[j]
        }
        if (array[j] < min) {
            min = array[j]
        }
    }

    println("$min $max")
}