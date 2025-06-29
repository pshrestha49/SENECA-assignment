from nltk.corpus import wordnet as wn

# List of word pairs
word_pairs = [
    ("car", "automobile"), ("gem", "jewel"), ("journey", "voyage"),
    ("boy", "lad"), ("coast", "shore"), ("asylum", "madhouse"),
    ("magician", "wizard"), ("midday", "noon"), ("furnace", "stove"),
    ("food", "fruit"), ("bird", "cock"), ("bird", "crane"),
    ("tool", "implement"), ("brother", "monk"), ("lad", "brother"),
    ("crane", "implement"), ("journey", "car"), ("monk", "oracle"),
    ("cemetery", "woodland"), ("food", "rooster"), ("coast", "hill"),
    ("forest", "graveyard"), ("shore", "woodland"), ("monk", "slave"),
    ("coast", "forest"), ("lad", "wizard"), ("chord", "smile"),
    ("glass", "magician"), ("rooster", "voyage"), ("noon", "string")
]

def get_similarity_scores(pairs):
    results = []

    for word1, word2 in pairs:
        max_sim = 0.0
        # Get noun synsets for each word
        synsets1 = wn.synsets(word1, pos=wn.NOUN)
        synsets2 = wn.synsets(word2, pos=wn.NOUN)

        for syn1 in synsets1:
            for syn2 in synsets2:
                sim = syn1.path_similarity(syn2)
                if sim is not None and sim > max_sim:
                    max_sim = sim

        results.append(((word1, word2), max_sim))

    # Sort by descending similarity
    results.sort(key=lambda x: x[1] if x[1] is not None else -1, reverse=True)
    return results

similarities = get_similarity_scores(word_pairs)

print("Word Pair Similarities (Descending Order):")
for pair, score in similarities:
    print(f"{pair[0]:<10} - {pair[1]:<10}: {score}")