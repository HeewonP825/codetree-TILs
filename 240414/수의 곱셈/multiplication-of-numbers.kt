fun main() {
    val input = readLine() ?: ""
    val nums = input.split(" ").filter { it.isNotEmpty() }.map { it.toInt() }.toIntArray()

    if (nums.size < 3) {
        return
    }

    val products = mutableSetOf<Int>()

    for (i in nums.indices) {
        for (j in i + 1 until nums.size) {
            for (k in j + 1 until nums.size) {
                products.add(nums[i] * nums[j] * nums[k])
            }
        }
    }

    val sortedProducts = products.sortedWith(compareByDescending<Int> {
        if (it % 2 == 0) 0 else 1
    }.thenByDescending { it })

    println(sortedProducts.first())
}