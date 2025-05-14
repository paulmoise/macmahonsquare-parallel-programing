# ♟️ MacMahon Square – Parallel Programming Project

This project implements a parallelized **backtracking solver** for the **MacMahon Square puzzle**, leveraging C++ and multithreading techniques to efficiently explore the solution space. The primary objective is to leverage multithreading to accelerate the backtracking process in solving large combinatorial puzzles.

---

## 🧩 Project Overview

This implementation solves instances of the puzzle with grid sizes **4×4**, **5×5**, and **6×6**.

The MacMahon Square puzzle involves arranging colored tiles on a square grid such that adjacent edges match in color. This project focuses on:

- **Modeling the puzzle**: Representing tiles and the board state.
- **Parallel exploration**: Utilizing multithreading to explore possible tile arrangements concurrently.
- **Optimization**: Reducing computation time by parallelizing the backtracking algorithm.

---

## 🚀 Getting Started

### Prerequisites

- A C++17 compatible compiler (e.g., `g++`, `clang++`)
- CMake >= 3.10
- Make (or any compatible build tool)

### Installation

1. **Clone the repository**:

```bash
git clone https://github.com/paulmoise/macmahonsquare-parallel-programing.git
cd macmahonsquare-parallel-programing
```

2. **Build the project**:

```bash
mkdir build
cd build
cmake ..
make
```

3. **Run the solver**:

```bash
./macmahonsquare_solver
```

---

## 🗂️ Project Structure

```
.
├── CMakeLists.txt           # Build configuration
├── data/                    # Input data files (tile definitions)
├── src/
│   ├── main.cpp             # Entry point of the application
│   ├── board.cpp/.hpp       # Board representation and logic
│   ├── piece.cpp/.hpp       # Tile representation
│   ├── helper.cpp/.hpp      # Utility functions
├── README.md                # Project documentation
```

---

## ⚙️ Features

- **Multithreaded Solver**: Utilizes C++ threads to parallelize the backtracking algorithm.
- **Modular Design**: Separates concerns into distinct classes (`Board`, `Piece`, `Helper`) for maintainability.
- **Configurable Parameters**: Allows customization of puzzle size and tile sets via input files.

---

## 📊 Performance

The parallel implementation demonstrates significant performance improvements over a single-threaded approach, especially on multi-core systems. Benchmarks indicate a reduction in computation time proportional to the number of threads utilized.

---

## 🧠 Future Enhancements

- **Dynamic Load Balancing**: Implementing work-stealing to optimize thread utilization.
- **GUI Visualization**: Developing a graphical interface to visualize the solving process.
- **Extended Puzzle Variants**: Adapting the solver for other tile-based puzzles.

---

## 📝 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## 👤 Author

**Paul Moïse Gangbadja**  
Master's Student in Artificial Intelligence  
University of Avignon, France  
[GitHub Profile](https://github.com/paulmoise)

---

## 🤝 Contributing

Contributions are welcome! Please fork the repository and submit a pull request for any enhancements or bug fixes.

---

## 📬 Contact

For any inquiries or feedback, please contact [m.p.gangbadja@gmail.com](mailto:m.p.gangbadja@gmail.com).
