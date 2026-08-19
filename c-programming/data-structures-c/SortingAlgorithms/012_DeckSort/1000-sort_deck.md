int _strcmp(const char *s1, const char *s2)

1. The function takes two strings as arguments.
2. It compares the first character of each string. If they are the same, it continues to the next character.
3. If the characters are different, it returns the difference between the two characters.
4. If one string is longer than the other, it returns the difference between the two characters.
5. If both strings are the same, it returns 0.

char get_value(deck_node_t *card)

get_value - Get the numerical value of a card.
Return: The numerical value of the card.

void insertion_sort_deck_kind(deck_node_t **deck)

1. The outer loop iterates over the deck of cards.
2. The inner loop iterates over the cards in the deck, starting with the card
   immediately preceding the current card.
3. The inner loop inserts the current card into the deck, in the proper position.
4. The inner loop terminates when the current card is inserted into the deck.
5. The outer loop terminates when the entire deck has been sorted.

void insertion_sort_deck_value(deck_node_t **deck)

1. The outer loop iterates over the deck of cards.
2. The inner loop iterates over the cards in the deck, starting with the card
   immediately preceding the current card.
3. The inner loop inserts the current card into the deck, in the proper position.
4. The inner loop terminates when the current card is inserted into the deck.
5. The outer loop terminates when the entire deck has been sorted.

