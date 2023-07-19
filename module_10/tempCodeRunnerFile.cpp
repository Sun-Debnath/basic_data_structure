 for(; i != j && i->next !=j; i = i->next, j = j->prev){
        swap(i->val,j->val);
    }