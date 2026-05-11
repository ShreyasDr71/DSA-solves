func getConcatenation(nums []int) []int {
	new := make([]int, 2*len(nums))
	for i := 0; i < len(nums); i++ {
		new[i] = nums[i]
		new[i+len(nums)] = nums[i]

	}
	return new
}

//easier solution is using : return append(nums, nums...)
