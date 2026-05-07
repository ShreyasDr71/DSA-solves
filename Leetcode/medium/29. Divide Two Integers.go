const (
	MinInt32 = -1 << 31  // -2147483648
	MaxInt32 = 1<<31 - 1 //  2147483647
)

func divide(dividend int, divisor int) int {
	ans := dividend / divisor

	if ans > MaxInt32 {
		return MaxInt32
	}
	if ans < MinInt32 {
		return MinInt32
	}
	return ans
}
