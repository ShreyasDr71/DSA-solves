func reverseString(s []byte) {
	start, end := 0, len(s)-1 // initialise

	for start < end {
		s[start], s[end] = s[end], s[start] //swap start with end and end with start
		end -= 1                            // reduce end
		start += 1                          // increase start
	}
}
