func minimumOperations(nums []int) int {
	totalop := 0

	for i := 0; i < len(nums); i++ {
		// If the number is not divisible by 3
		if nums[i]%3 != 0 {
			// It only takes 1 operation to make it divisible
			// (Either subtract 1 or add 1)
			totalop += 1
		}
	}

	return totalop
}
