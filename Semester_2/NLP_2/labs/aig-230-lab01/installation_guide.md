# AIG 230 – Core Development Setup Guide

## 1. Core Development Tools (Absolutely Required)

### 1.1 Visual Studio Code (VS Code)

#### What it is
A lightweight, professional code editor used across industry and academia.

#### Why you need it for AIG 230
- Primary environment for Python development
- Integrated terminal for Git and Python commands
- Excellent support for Jupyter notebooks, which you will use alongside Google Colab
- Allows you to demonstrate best practices such as virtual environments, debugging, and code formatting

#### Install
Download from: https://code.visualstudio.com  
Choose **Windows**.

During installation, make sure to check:
- Add to PATH
- Register Code as an editor for supported file types
- Add Open with Code action to Windows Explorer

#### After installation, install these VS Code extensions
Open VS Code → Extensions tab:
- Python (Microsoft)
- Pylance (Microsoft)
- Jupyter (Microsoft)
- GitLens (optional but very useful for teaching Git concepts)

---

### 1.2 Python (Local Installation)

#### What it is
The primary programming language for the course.

#### Why local Python is necessary
Even if you use Google Colab in class, students must understand local environments.

Required for:
- Git-based assignments
- Running scripts outside notebooks
- Demonstrating virtual environments
- Installing NLP libraries (spaCy, PyTorch, transformers)

#### Recommended version
- Python 3.10 or 3.11
- Do not use 3.12 yet. Some ML libraries still lag behind.

#### Install
Download from: https://www.python.org/downloads/  
Choose **Python 3.11.x (64-bit)**.

Important:
- Check **Add Python to PATH** during installation
- Choose **Customize installation** and keep defaults

#### Verify installation
Open Command Prompt or the VS Code terminal:

    python --version
    pip --version

---

### 1.3 Git

#### What it is
A version control system used for tracking code and collaboration.

#### Why Git is required
- All assignments are submitted via GitHub repositories
- Teaches reproducibility and collaboration
- Essential industry skill
- Enables you to review student work properly

#### Install
Download from: https://git-scm.com  
Use default installation settings.

When asked about the default editor, select **VS Code**.

#### Verify

    git --version

---

## 2. GitHub Account (Required, Not Software)

#### Why
- Students submit assignments by sharing GitHub repositories
- You need an account to be added as a collaborator
- Required for teaching Git workflows

#### Action
Create or use an existing GitHub account: https://github.com

Configure Git locally:

    git config --global user.name "Your Name"
    git config --global user.email "your_email@example.com"

---

## 3. Python Environment Management (Strongly Recommended)

### 3.1 venv (Built-in)

#### What it is
Python’s built-in virtual environment system.

#### Why it matters
- Prevents dependency conflicts
- Allows each assignment or demo to have clean dependencies
- Critical for teaching professional workflows

#### No installation required
It ships with Python.

#### Example (used in class)

    python -m venv aig230-env
    aig230-env\Scripts\activate
    pip install numpy pandas torch

---

## 4. Jupyter Notebooks (Local Support)

### 4.1 Jupyter via VS Code

#### Why
- You will likely demonstrate notebooks locally even if students use Colab
- Needed for offline teaching or fallback scenarios
- VS Code handles this seamlessly

#### Install

    pip install jupyter notebook

VS Code will auto-detect it.

---

## 5. Machine Learning and NLP Libraries (Install Later, Not Day 1)

You do not need to install these immediately, but your machine should be able to handle them.

You will eventually install:
- numpy
- pandas
- matplotlib
- scikit-learn
- torch (PyTorch)
- transformers
- spaCy

These should be installed inside virtual environments, not globally.

---

## 6. Google Colab (Required for Class)

#### What it is
Cloud-based Jupyter notebooks with free GPU access.

#### Why you need it
- Eliminates hardware variability across students
- Enables PyTorch and transformer demos without setup issues
- Ideal for in-class labs

#### Action
- Ensure you have a Google account
- Test access: https://colab.research.google.com

Practice:
- Uploading notebooks
- Mounting Google Drive
- Installing packages with pip
