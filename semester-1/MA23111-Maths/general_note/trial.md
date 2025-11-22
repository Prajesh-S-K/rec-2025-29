# 📘 Linear Algebra Study Guide
*(Vector Spaces, Subspaces, Linear Combinations, Basis, Transformations, Null & Range, Dimension Theorem, and Applications)*

---

## 🧩 1️⃣ Vector Spaces

### ⚙️ Definition
A **vector space** \(V\) over a **field** \(F\) is a non-empty set of elements (vectors) that satisfies eight axioms under two operations — vector addition and scalar multiplication.

---

### 🧮 Eight Conditions of a Vector Space

| No. | Property | Description |
|:--:|:--|:--|
| 1 | Closure under addition | If \(u,v\in V\), then \(u+v\in V\). |
| 2 | Commutative addition | \(u+v=v+u\). |
| 3 | Associative addition | \((u+v)+w=u+(v+w)\). |
| 4 | Existence of zero vector | There exists \(0\in V\) such that \(u+0=u\). |
| 5 | Existence of additive inverse | For each \(u\in V\), there exists \((-u)\) such that \(u+(-u)=0\). |
| 6 | Closure under scalar multiplication | \(c\,u\in V\) for all \(c\in F\). |
| 7 | Distributive property | \(c(u+v)=cu+cv\). |
| 8 | Compatibility of scalar multiplication | \((ab)u=a(bu)\); \(1u=u\). |

---

### 💡 Examples

| Example Type | Vector Space | Explanation |
|:--|:--|:--|
| Coordinate | \(\mathbb{R}^2,\ \mathbb{R}^3,\ \mathbb{R}^n\) | Tuples \((x_1,\dots,x_n)\) with usual operations. |
| Polynomials | \(P_n\) | All polynomials of degree \(\le n\). |
| Matrices | \(M_{m\times n}\) | All \(m\times n\) real matrices. |
| Functions | \(C[a,b]\) | All continuous functions on \([a,b]\). |
| Zero Space | \(\{0\}\) | Contains only the zero vector. |

---

### ⚙️ Zero Vector & Inverses
- **Zero vector:** unique; \(u+0=u\).
- **Additive inverse:** \(u+(-u)=0\).
- **Scalar inverse (for \(c\ne 0\)):** \((c^{-1})\, (cu) = u\).

---

### 🧠 MCQ Practice
**Theory**
1) Vector space must be closed under addition & scalar multiplication. ✅  
2) Set of positive integers under addition → **not** a vector space. ✅  
3) Zero vector is unique. ✅

**Numerical**: add vectors, find inverses, check closure.  
**Practical**: temperature series, pixel intensities, voltage signals behave as vectors.

---

## 🧩 2️⃣ Subspaces

### ⚙️ Definition
A **subspace** \(W\) of a vector space \(V\) is a subset that is itself a vector space under the same operations.

**Subspace test**
1) \(0\in W\)  
2) \(u,v\in W \Rightarrow u+v\in W\)  
3) \(u\in W,\ c\in F \Rightarrow cu\in W\)

---

### 💡 Examples

| Subspace | Description |
|:--|:--|
| Line \(y=2x\) in \(\mathbb{R}^2\) | Passes through origin → subspace. |
| Plane \(x+y+z=0\) in \(\mathbb{R}^3\) | Subspace of \(\mathbb{R}^3\). |
| \(\{0\}\) | Zero subspace. |
| Even functions | Subspace of \(C[a,b]\). |
| Solutions of \(Ax=0\) | Null space → subspace. |

---

### 🧠 Key Properties

| Concept | Meaning |
|:--|:--|
| Intersection of subspaces | Always a subspace. |
| Union of subspaces | Not always a subspace. |
| Sum of subspaces | Always a subspace. |
| Smallest subspace | \(\{0\}\). |
| Largest subspace | \(V\) itself. |

---

### 🧮 Examples
- \(W=\{(x,y):y=2x\}\) → subspace. ✅  
- \(W=\{(x,y):y=x+1\}\) → **not** subspace (fails zero). ❌  
- Any plane through origin in \(\mathbb{R}^3\) → subspace. ✅

**MCQs:** Subspace must include zero ✅; intersection is a subspace ✅.

---

## 🧩 3️⃣ Linear Combinations and Systems of Linear Equations

### ⚙️ Definition
A **linear combination** of \(v_1,\dots,v_n\) is
\[
c_1v_1+\cdots+c_nv_n,\quad c_i\in F.
\]
The set of all such combinations is the **span**: \(\operatorname{span}\{v_1,\dots,v_n\}\).

---

### 💡 Matrix Relation
For a matrix \(A=[a_1\ \cdots\ a_n]\) with columns \(a_i\),
\[
Ax=b \quad \Leftrightarrow \quad b=x_1a_1+\cdots+x_na_n.
\]
So \(Ax=b\) is consistent iff \(b\in\operatorname{Col}(A)\).

---

### ⚙️ Homogeneous Systems
\[
Ax=0
\]
Always consistent (solution \(x=0\)); solution set is the **null space**, which is a subspace.

---

### 🧮 Examples
- \(\operatorname{span}\{(1,0),(0,1)\}=\mathbb{R}^2\).  
- \(\operatorname{span}\{(1,2),(2,4)\}=\{(t,2t)\}\) (dependent).  
- With \(A=\begin{bmatrix}1&2\\[2pt]2&4\end{bmatrix}\), \(b=(3,6)\) → consistent. ✅

**MCQs:** \(b\) is a combination of columns ↔ solution exists ✅; homogeneous always consistent ✅.

---

## 🧩 4️⃣ Linear Independence, Dependence, and Basis

### ⚙️ Definition
- **Independent:** \(c_1v_1+\cdots+c_nv_n=0 \Rightarrow c_i=0\ \forall i\).  
- **Dependent:** there exists a non-trivial combination giving 0.  
- **Basis:** independent set that spans \(V\).  
- **Dimension:** number of vectors in any basis.

---

### 💡 Examples

| Example | Independence | Dimension |
|:--|:--|:--|
| \(\{(1,0),(0,1)\}\subset\mathbb{R}^2\) | Independent | 2 |
| \(\{(1,2),(2,4)\}\) | Dependent | 1 (line) |
| \(\{1,x,x^2\}\subset P_2\) | Independent | 3 |

---

### ⚙️ How to Check Independence

| Method | Criterion |
|:--|:--|
| Definition | Solve \(c_1v_1+\cdots+c_nv_n=0\). |
| Determinant (square case) | \(\det A\neq 0 \Rightarrow\) independent. |
| Rank test | \(\operatorname{rank}A=\) number of vectors. |
| RREF | Pivot in each column → independent. |
| Geometry | Not parallel/coplanar → independent. |

---

### 💡 Relation Summary

| Concept | Condition |
|:--|:--|
| Independent | Only trivial solution. |
| Dependent | At least one non-trivial solution. |
| Basis | Independent + spans. |
| Dimension | \# of basis vectors. |
| Span | Subspace generated by given vectors. |

**MCQs:** Zero vector in set → dependent ✅; all bases have same size ✅; \(\det=0\) → dependent ✅; \(\operatorname{rank}+\operatorname{nullity}=n\) ✅.

---

## 🧩 5️⃣ Linear Transformations, Null & Range Spaces

### ⚙️ Definition
A linear transformation \(T:V\to W\) satisfies  
\(T(u+v)=T(u)+T(v),\quad T(cu)=c\,T(u)\).  
Every linear map \(\mathbb{R}^n\to\mathbb{R}^m\) can be represented by an \(m\times n\) matrix \(A\): \(T(x)=Ax\).

---

### 💡 Example
\(T(x,y)=(x+y,\,2x-y)\).  
\(T(e_1)=(1,2)\), \(T(e_2)=(1,-1)\)  
\[
[T]=\begin{bmatrix}1&1\\[2pt]2&-1\end{bmatrix}.
\]

---

### 🧮 Null and Range

| Concept | Definition | Subspace of | Dimension |
|:--|:--|:--|:--|
| Null space / Kernel | \(\{x:Ax=0\}\) | Domain | Nullity |
| Range / Image | \(\{Ax:x\in V\}\) | Codomain | Rank |

**Rank–Nullity:** \(\operatorname{rank}A+\operatorname{nullity}A=n\).

**Example:** Projection \(T(x,y,z)=(x,y,0)\),
\[
[T]=\begin{bmatrix}1&0&0\\[2pt]0&1&0\\[2pt]0&0&0\end{bmatrix}
\quad\Rightarrow\quad \operatorname{rank}=2,\ \operatorname{nullity}=1.
\]

**MCQs:** Linear map = additivity + homogeneity ✅; columns of \([T]\) are images of basis vectors ✅; rank \(=1\Rightarrow\) nullity \(=n-1\) ✅.

---

## 🧩 6️⃣ Dimension Theorem (Rank–Nullity)

### ⚙️ Statement
For \(T:V\to W\),
\[
\dim V=\dim(\ker T)+\dim(\operatorname{im} T),
\]
or for matrices \(\operatorname{rank}A+\operatorname{nullity}A=n\).

---

### 🧮 Examples
- \(A=\begin{bmatrix}1&2\\[2pt]2&4\end{bmatrix}\): rank \(1\), nullity \(1\) → \(1+1=2\). ✅  
- \(A=\operatorname{diag}(1,1,0)\): rank \(2\), nullity \(1\). ✅  
- \(T(p)=p'\) on \(P_3\): rank \(3\), nullity \(1\). ✅

---

### 🧠 Consequences

| Property | Meaning |
|:--|:--|
| Nullity \(=0\) | Injective (one-to-one). |
| Rank \(=\dim W\) | Surjective (onto). |
| Square full rank | Invertible (bijective). |
| Row rank \(=\) column rank | Always true. |

---

## 🧩 7️⃣ Matrix Representation of a Linear Transformation

### ⚙️ Procedure
1) Choose bases for domain & codomain.  
2) Apply \(T\) to each basis vector.  
3) Express \(T(v_i)\) in codomain basis.  
4) Form matrix columns: \([T]_{B_W}^{B_V}=[\,T(v_1)\ \cdots\ T(v_n)\,]\).

**Example:** Differentiation \(T(p)=p'\) in basis \(\{1,x,x^2\}\):
\[
T(1)=0,\quad T(x)=1,\quad T(x^2)=2x \ \Rightarrow\
[T]=\begin{bmatrix}
0&1&0\\[2pt]
0&0&2\\[2pt]
0&0&0
\end{bmatrix}.
\]

---

### 🧠 Key Properties

| Operation | Matrix Rule |
|:--|:--|
| Composition | \([T_2\circ T_1]=[T_2]\,[T_1]\). |
| Sum | \([T_1+T_2]=[T_1]+[T_2]\). |
| Inverse | Exists iff \(A\) is invertible. |
| Change of basis | \([T]'=P^{-1}[T]P\). |

---

## 🧩 8️⃣ Applications of Vector Spaces

### 💻 Computer Science

| Area | Use |
|:--|:--|
| Machine Learning | Feature vectors, embeddings. |
| Graphics | Transformations, projections. |
| Data Compression | Basis transforms (PCA, DCT). |
| Computer Vision | Images as matrices; filters as linear ops. |
| Cryptography | Linear block codes. |

---

### ⚡ Electrical & Electronics

| Use | Vector-space aspect |
|:--|:--|
| Circuit analysis | Linear system \(Ax=b\). |
| Signal processing | Function spaces, Fourier basis. |
| Control systems | State-space models. |
| Communications | Coding subspaces. |

---

### ⚙️ Physics

| Domain | Vector role |
|:--|:--|
| Mechanics | Forces, velocities (\(\mathbb{R}^3\)). |
| Quantum mechanics | States in Hilbert spaces. |
| Relativity | 4-D vector space with metric tensor. |

---

### 📈 Math & Data

| Use | Vector idea |
|:--|:--|
| PCA | Orthogonal basis transformation. |
| Regression | Span of columns in design matrix. |
| Differential equations | Solutions form a subspace. |

---

### 🎨 Visualization

| Application | Meaning |
|:--|:--|
| Projection | Linear map to a subspace. |
| Rotation | Orthogonal linear map. |
| Scaling | Diagonal transformation. |

---

### 🌍 Summary
Vector spaces provide the language of linearity — everything from sound, image, motion, and data lives in them.

---

### 🧾 Final Summary Table

| Concept | Definition | Key Idea |
|:--|:--|:--|
| Vector Space | Set with addition & scalar mult. | 8 axioms. |
| Subspace | Subset closed under ops. | Contains \(0\). |
| Span | All linear combinations. | Generates subspace. |
| Linear Independence | Only trivial combo gives \(0\). | Unique representation. |
| Basis | Independent spanning set. | Defines coordinates. |
| Dimension | \# of basis vectors. | Size of space. |
| Linear Transformation | \(T(u+v)=T(u)+T(v)\). | Represented by a matrix. |
| Null Space | \(\{x:Ax=0\}\). | Lost directions. |
| Range Space | \(\{Ax\}\). | Outputs of the map. |
| Rank | \(\dim(\text{range})\). | Info preserved. |
| Nullity | \(\dim(\text{kernel})\). | Info lost. |
| Dimension Theorem | rank + nullity = \(\dim(\text{domain})\). | Conservation of dimensions. |
| Matrix Representation | Columns = images of basis. | Implements \(T\). |
| Applications | ML, circuits, physics, graphics. | Universal framework. |