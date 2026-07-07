// 1. sort()
sort(v.begin(),v.end()); // ascending
sort(v.begin(),v.end(), greater<int>());

//  2. reverse()
reverse(v.begin(),v.end());

//  3. max_element
int mx = *max_element(v.begin(),v.end());

// 4. min_element
int mn = *min_element(v.begin(),v.end());

// 5. binary_search
binary_search(start_iterator, end_iterator, value_to_search);

// 6. next permutation
next_permutation(v.begin(),v.end());

//  7. rotate
rotate(v.begin(),v.begin()+2,v.end());









