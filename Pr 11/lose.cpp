int new_ran_ind()
{
    int rand_Elem = rand() % 10;
    rand_Elem = (rand_Elem == 0) ? 4 : 2;
    return rand_Elem;
}