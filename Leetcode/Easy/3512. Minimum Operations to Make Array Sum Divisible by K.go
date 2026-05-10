func minOperations(nums []int, k int) int {
	sum := 0

	// Use a loop to sum the elements
	for _, num := range nums {
		sum += num
	}

	// If the sum is already divisible by k, return 0
	if sum%k == 0 {
		return 0
	}

	// Otherwise, return the remainder
	return sum % k
}
