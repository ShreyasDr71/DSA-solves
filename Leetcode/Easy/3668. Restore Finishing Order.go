func recoverOrder(order []int, friends []int) []int {
	var result []int

	// 1. Walk through the race finishing order
	for _, person := range order {

		// 2. Check if this person is one of your friends
		for _, friend := range friends {
			if person == friend {
				// 3. If they match, add them to our final list
				result = append(result, person)
			}
		}
	}

	return result
}
