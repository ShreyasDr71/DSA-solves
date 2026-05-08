import "strconv"

func countAndSay(n int) string {
	res := "1"
	for n > 1 {
		cur := ""
		i := 0
		for i < len(res) {
			count := 1
			for i+1 < len(res) && res[i] == res[i+1] {
				i++
				count++
			}
			cur += strconv.Itoa(count) + string(res[i])
			i++
		}
		res = cur
		n--
	}
	return res
}
