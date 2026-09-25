# Alpha PyGrid

A lightweight, local-first data workbench built from scratch in C++. Alpha PyGrid replaces heavy office suites and legacy VBA with a fast, immediate-mode interface driven by **Dear ImGui** and native **Python** script execution.

> ⚠️ **Project Status:** Development is temporarily paused due to academic commitments. Work will resume in **May 2027**.

---

## Key Features

* **Python Integration:** Execute local Pandas, NumPy, or Scikit-learn pipelines directly against active spreadsheet data.
* **Dual-Window IDE:** Use the classic `Alt + F11` shortcut to spawn a decoupled, multi-monitor sub-IDE window for script writing.
* **No Cloud Overhead:** Operates entirely offline on your local machine with no subscriptions, trackers, or cloud dependencies.
* **Immediate-Mode UI:** High-performance interface built using Dear ImGui, optimized for fast keyboard navigation and low latency.

## Architecture & Performance

To maximize data transfer speeds between C++ and Python without the heavy runtime overhead of traditional binding layers (like `pybind11`), Alpha PyGrid utilizes **nanobind**. 

* **Zero-Copy Buffers:** Passes structural cell vectors directly into NumPy array protocols.
* **Low Overhead:** Leverages streamlined CPython C-API mapping to achieve smaller binaries and faster execution speeds.
* **Native C++:** Core spreadsheet operations and dependency resolution are compiled from scratch for maximum efficiency.

## Tech Stack

* **Core Engine:** C++
* **UI Framework:** Dear ImGui
* **Bindings:** nanobind (CPython C-API)
* **Target Environment:** Local Python (Pandas, NumPy, Scikit-learn)

## Getting Started

*(Developer Note: Add compilation, build requirements, or installation steps here once development resumes.)*

## License

This project is licensed under the **GNU GPLv3** license. 
