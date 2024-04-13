fun main() {
    val num = IntArray(30) { 0 }

    for( i in 0 until 30) {
        readLine()?.toIntOrNull()?.let {
            num[i] = it
        }
    }

    val temp = IntArray(30) { 0 }
    for( j in 0 until 30) {
        for( k in 1..30) {
            if(num[j] == k) {
                temp[k-1] = num[j]
            }
        }
    }

    for( m in 0 until 30) {
        if(temp[m] == 0) {
            println(m+1)
        }
    }
}