# 42projects – My 42 School C Projects Collection

This repository contains a collection of my projects completed during the 42 school curriculum. Each project is included as a [Git submodule](https://git-scm.com/book/en/v2/Git-Tools-Submodules) and follows the guidelines and structure defined by 42.

---

## 📁 Repository Structure

Each project is located in its own folder in the root directory and is tracked as a submodule.

| Folder            | Project Name         | Description                                   |
|-------------------|----------------------|-----------------------------------------------|
| `00_LIBFT_CORE`   | **Libft (core)**     | My original base `libft` version              |
| `01_LIBFT`        | **Libft**            | Final `libft` project (mandatory + bonus)     |
| `02_PRINT_F`      | **ft_printf**        | Custom implementation of `printf`             |
| `03_GET_NEXT_LINE`| **get_next_line**    | Reads one line at a time from a file          |
| `04_SO_LONG`      | **so_long**          | Simple 2D graphical game using `minilibx`     |
| `05_PIPEX`        | **pipex**            | Shell-like command piping using `fork`/`exec` |
| `99_PISCINE`      | **Piscine Archive**  | Code from the 42 Piscine (non-submodule)      |

---

## 📄 Individual Project Info

Each project folder contains its **own `README.md`**, which explains:
- Project purpose
- Compilation instructions
- Available features
- Bonus parts (if any)

To get started, open the corresponding project directory and read its `README.md`.

---

## 🧭 Cloning the Repository

To properly clone the repository **with all submodules**, use:

```bash
git clone --recurse-submodules https://github.com/Aztaban/42projects.git
```

If you've already cloned it without submodules:

```bash
git submodule update --init --recursive
```

## 👤 Author

Created and maintained by [Martin Justa](https://github.com/aztaban) as part of the 42 school curriculum.
