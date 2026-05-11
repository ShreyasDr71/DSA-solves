func subsetXORSum(nums []int) int {

	var dfs func(index int, current int) int

	// Define the logic
	dfs = func(index int, current int) int {
		// Base case: we've looked at all numbers
		if index == len(nums) {
			return current
		}

		// Choice 1: Include the current number in the XOR sum
		include := dfs(index+1, current^nums[index])

		// Choice 2: Exclude the current number
		exclude := dfs(index+1, current)

		return include + exclude
	}

	// Start the recursion at index 0 with a current XOR sum of 0
	return dfs(0, 0)
}
