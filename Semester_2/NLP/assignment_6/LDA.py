import gensim
from gensim import corpora
from gensim.models import LdaModel
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

# Step 1: Preprocess the corpus
stop_words = set(stopwords.words('english'))
processed_docs = []
for doc in documents:
    # Tokenize and remove stopwords
    tokens = word_tokenize(doc.lower())
    filtered_tokens = [word for word in tokens if word.isalpha() and word not in stop_words]
    processed_docs.append(filtered_tokens)

# Step 2: Create a dictionary representation of the documents
dictionary = corpora.Dictionary(processed_docs)

# Step 3: Convert the documents to a document-term matrix
corpus = [dictionary.doc2bow(doc) for doc in processed_docs]

# Step 4: Train the LDA model
# Specify the number of topics
num_topics = 2
lda_model = LdaModel(corpus, num_topics=num_topics, id2word=dictionary, passes=15, random_state=0)

# Step 5: Display the topics
for idx, topic in lda_model.print_topics(num_words=5):
    print(f"Topic {idx + 1}: {topic}")

# Step 6: (Optional) Get topic distribution for each document
for i, doc in enumerate(corpus):
    print(f"\nDocument {i + 1} topic distribution:")
    doc_topics = lda_model.get_document_topics(doc)
    for topic_num, prob in doc_topics:
        print(f"Topic {topic_num + 1}: {prob:.4f}")
