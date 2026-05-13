func findErrorNums(nums []int) []int {
	seen := make([]int, len(nums))
	var res []int
	for _, n := range nums {
		if seen[n-1] == 0 {
			seen[n-1] = n
		} else {
			res = append(res, n)
		}
	}
	for i, n := range seen {
		if n == 0 {
			res = append(res, i+1)
		}
	}
	return res
}
