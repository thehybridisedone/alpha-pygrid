# Kairos PyGrid

I am building **Kairos PyGrid** as a lightweight, local-first data workbench written from scratch in pure, compiled C++ that natively repacks classic spreadsheet operations with Python instead of ancient VBA. I am completely stripping away years of bloated commercial office menus, forced cloud dependencies, and subscription metrics. The user interface is driven entirely by my high-performance **Dear ImGui** immediate-mode canvas, combining the fast keyboard navigation of traditional spreadsheets with a modern developer environment. Pressing the classic muscle-memory shortcut **`Alt + F11`** spawns a completely decoupled, multi-monitor sub-IDE window. This allows you to write and execute clean local Pandas, NumPy, or Scikit-learn pipelines directly against active grid data, viewing real-time spreadsheet updates completely offline on local silicon.

To achieve maximum execution efficiency across the language boundary, my project avoids the heavier compilation and runtime memory overheads of classic binding frameworks like pybind11. Instead, my framework leverages **`nanobind`**, a modern successor designed by the same author to achieve up to 10× lower runtime overhead and significantly smaller binaries through streamlined CPython C-API mapping. By using `nanobind` to pass structural cell vectors directly into NumPy array protocols via zero-copy data buffers, the engine processes millions of cell dependencies at raw machine speeds. **Kairos PyGrid** is proudly open-source under the **GNU GPLv3 license**, creating a secure, unbloated, and strictly private desktop environment for modern data engineers and power operators.


---

###  WORK IN PROGRESS (STATUS: INACTIVE UNTIL MAY 2027)
**NOTICE:** This repository represents a locked conceptual schema and physical folder boundary tier mapping. Active compilation testing and code logic expansions are strictly paused while the core maintainer undergoes academic preparation. 

* **Pull Requests:** Level 1, 2, and 3 folder configurations are established. Automated linters are configured to auto-reject Tier violations. Structural optimization reviews will commence post-timeline activation.
* **Timeline Standby:** Code compilation scripts remain on strict feature freeze.

---
