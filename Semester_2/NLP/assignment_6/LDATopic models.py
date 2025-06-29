from sklearn.decomposition import LatentDirichletAllocation
from sklearn.feature_extraction.text import CountVectorizer
from nltk.corpus import stopwords
from nltk.tokenize import word_tokenize
import nltk

# Download stopwords if you haven't done so
nltk.download('punkt')
nltk.download('stopwords')

# Sample corpus of documents
documents = [
    "Machine learning is a field of artificial intelligence that uses statistical techniques.",
    "Deep learning allows models to solve complex problems in natural language processing.",
    "Neural networks are at the core of deep learning algorithms.",
    "Natural language processing is an essential part of artificial intelligence applications.",
    "Statistics and machine learning play a vital role in data science."
]

# Step 1: Preprocess the text and remove stopwords
stop_words = set(stopwords.words('english'))
processed_docs = []
for doc in documents:
    # Tokenize and remove stopwords
    tokens = word_tokenize(doc.lower())
    filtered_tokens = [word for word in tokens if word.isalpha() and word not in stop_words]
    processed_docs.append(" ".join(filtered_tokens))

# Step 2: Convert documents to a document-term matrix using CountVectorizer
vectorizer = CountVectorizer()
doc_term_matrix = vectorizer.fit_transform(processed_docs)

# Step 3: Initialize and fit the LDA model
num_topics = 2
lda = LatentDirichletAllocation(n_components=num_topics, max_iter=10, random_state=0)
lda.fit(doc_term_matrix)

# Step 4: Display the topics with their top words
words = vectorizer.get_feature_names_out()
for idx, topic in enumerate(lda.components_):
    print(f"Topic {idx + 1}: ", [words[i] for i in topic.argsort()[-5:]])

# Step 5: (Optional) Get topic distribution for each document
for i, doc in enumerate(doc_term_matrix):
    doc_topic_dist = lda.transform(doc)
    print(f"\nDocument {i + 1} topic distribution: {doc_topic_dist[0]}")
