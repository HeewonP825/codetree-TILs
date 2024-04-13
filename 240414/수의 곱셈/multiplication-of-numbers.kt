fun main() {
    val input = readLine() ?: ""
    val num = input.split(" ").filter { it.isNotEmpty() }.map { it.toInt() }.toIntArray()

    if (num.size < 3) {
        return
    }

    val array = IntArray(7)

    for(i in 0 until 3)
        array[i] = num[i]
    
    array[3] = num[0] * num[1];
    array[4] = num[1] * num[2];
    array[5] = num[0] * num[2];
    array[6] = num[0] * num[1] * num[2];

    val judge = Array(7) { IntArray(2) }
    for(i in 0 until 7) {
        judge[i][0] = array[i]
        judge[i][1] = if(array[i] % 2 == 0) 0 else 1
    }

    var oddRank = 0
    var evenRank = 0
    for(i in 0 until 7) {
        if(judge[i][1] == 1 && judge[i][0] > oddRank)
            oddRank = judge[i][0]
        else if(judge[i][1] == 0 && judge[i][0] > evenRank)
            evenRank = judge[i][0]
    }

    if(oddRank != 0)
        println(oddRank)
    else
        println(evenRank)
}