func floodFill(image [][]int, sr int, sc int, newColor int) [][]int {
	row, coloumn := len(image), len(image[0])

	var dfs func(r, c int)

	color := image[sr][sc]

	if color == newColor {
		return image
	}

	dfs = func(r, c int) {
		if image[r][c] == color {
			image[r][c] = newColor
			if r >= 1 {
				dfs(r-1, c)
			}
			if r+1 < row {
				dfs(r+1, c)
			}
			if c >= 1 {
				dfs(r, c-1)
			}
			if c+1 < coloumn {
				dfs(r, c+1)
			}
		}
	}
	dfs(sr, sc)
	return image
}
