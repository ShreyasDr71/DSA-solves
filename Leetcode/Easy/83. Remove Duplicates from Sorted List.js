var deleteDuplicates = function(head) {
    // Special case
    if(head == null || head.next == null)
        return head;
    
    let curr = head;
    
    while( curr != null && curr.next != null){
        
        if(curr.val == curr.next.val){
            
            curr.next = curr.next.next;
        }
        //  increment 
        else{
            curr = curr.next; 
        }
    }
    return head;        
};
