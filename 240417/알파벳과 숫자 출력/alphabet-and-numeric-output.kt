fun main() {
    val n = readLine()!!.toInt()

    val alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    val number = "123456789"

    var alphabetIndex = 0;
    var numberIndex = 0;

    for(i in 0 until n) {
        for(j in 0 until n-i) {
            print("${alphabet[alphabetIndex]} ")
            alphabetIndex = (alphabetIndex + 1) % 26
        }
        for(j in 0 until i+1) {
            print("${number[numberIndex]} ")
            numberIndex = (numberIndex + 1) % 9
        }
        println()
    }
}