func swapPairs(head *ListNode) *ListNode {
	if head == nil || head.Next == nil {
		return head
	}
	first := head
	second := head.Next
	nextPairHead := second.Next
	second.Next = first
	first.Next = swapPairs(nextPairHead)
	return second
}
