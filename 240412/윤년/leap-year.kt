fun isLeapYear(year : Int) : Int {
    return if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        1
    } else {
        0
    }
}

fun main() {
    val year = readLine()!!.toInt()
    println(isLeapYear(year))
}