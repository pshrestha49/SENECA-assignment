# Lab 1 – Python Virtual Environment and Jupyter Setup (Windows + Git Bash + VS Code)

Follow **all steps in order**. Do not skip steps.

---

## Part A. Navigate to the Correct Project Folder

1. Open **Git Bash**
2. Navigate to your lab folder:

```bash
cd "~/Documents/Seneca Polytechnic/AIG230 - NLP/labs/aig-230-lab01"
```

3. Confirm you are in the correct location:

```bash
pwd
```

You should see a path that ends with:

```
.../AIG230 - NLP/labs/aig-230-lab01
```

---

## Part B. Create the Virtual Environment (Correct Location)

> The virtual environment **must be created inside the lab folder**.

```bash
python -m venv aig230-env
```

Verify it was created correctly:

```bash
ls aig230-env
```

You must see:

```
Include  Lib  Scripts  pyvenv.cfg
```

---

## Part C. Activate the Environment (Git Bash)

```bash
source "aig230-env/Scripts/activate"
```

You should now see:

```
(aig230-env)
```

Verify activation:

```bash
which python
```

The output must include:

```
aig230-env/Scripts/python.exe
```

---

## Part D. Install Jupyter and ipykernel

```bash
pip install --upgrade pip
pip install jupyter ipykernel
```

---

## Part E. Register the Environment as a Jupyter Kernel

```bash
python -m ipykernel install --user \
  --name aig230-env \
  --display-name "Python (AIG230)"
```

(Optional check)

```bash
jupyter kernelspec list
```

---

## Part F. Open the Project in VS Code

1. Open **VS Code**
2. Click **File → Open Folder**
3. Open:

```
Documents/Seneca Polytechnic/AIG230 - NLP/labs/aig-230-lab01
```

---

## Part G. Select the Python Interpreter in VS Code (Required)

1. Press `Ctrl + Shift + P`
2. Select **Python: Select Interpreter**
3. Choose **Enter interpreter path…**
4. Navigate to:

```
aig230-env/Scripts/python.exe
```

5. Select **python.exe**
6. Reload VS Code:

```
Ctrl + Shift + P → Reload Window
```

---

## Part H. Select the Kernel in the Notebook

1. Open the `.ipynb` file
2. Click **Select Kernel**
3. Choose **Python Environments**
4. Select **Python (AIG230)** or **aig230-env**

---

## Part I. Final Verification (Required)

Run in the notebook:

```python
import sys
print(sys.executable)
```

The output must include:

```
aig230-env/Scripts/python.exe
```

---

## Required Folder Structure

```
aig-230-lab01/
├─ aig230-env/
├─ lab01.ipynb
└─ other files
```

---
