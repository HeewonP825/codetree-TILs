fun main() {
    val n = readLine()!!.toInt()

    for(i in 1..200 / n) {
        print("${n * i} ")
        
        if((n * i) % 10 == 0) 
            break
    }
}