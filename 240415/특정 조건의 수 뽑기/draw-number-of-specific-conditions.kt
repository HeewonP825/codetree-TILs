fun main() {
    val n = readLine()!!.toInt()

    var closest = 200
    var above = -1

    val numbers = readLine()!!.split(" ").map { it.toInt() }

    for(num in numbers) {
        if(Math.abs(100 - num) < Math.abs(100 - closest)) {
            closest = num
        }

        if(num >= 100 && (above == -1 || num < above)) {
            above = num
        }
    }

    println("$closest ${if (above == -1) -1 else above}")
}