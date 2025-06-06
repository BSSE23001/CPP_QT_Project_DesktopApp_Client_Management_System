# **Client Management System**  

## **Overview**  
The **Client Management System** is a modern, responsive desktop application designed to streamline client data management. Built using **Qt 5**, **C++**, and **QML**, it provides an intuitive interface for adding, editing, and managing client records efficiently.  

### **Key Features**  
✔ **User-Friendly Interface** – Clean and responsive UI with smooth navigation.  
✔ **Client Data Management** – Add, edit, delete, and search client records.  
✔ **Data Persistence** – Securely stores client information locally.  
✔ **Cross-Platform Support** – Works on Windows, Linux, and macOS.  
✔ **Customizable Views** – Flexible display options for better data visualization.  

---

## **Requirements**  
### **Development Environment**  
- **Qt 5.15+** (or compatible version)  
- **C++17** (or later)  
- **QMake** (for building)  

### **Runtime Dependencies**  
- **Qt Core, GUI, Widgets, and QML modules**  
- **SQLite** (for local database storage)  

---

## **Installation & Setup**  
### **1. Clone the Repository**  
```bash  
git clone https://github.com/your-repo/client-management-system.git  
cd client-management-system  
```  

### **2. Build the Project**  
#### **Using QMake**  
```bash  
qmake ClientManagementSystem.pro  
make  
```  

### **3. Run the Application**  
```bash  
./ClientManagementSystem  # Linux/macOS  
ClientManagementSystem.exe  # Windows  
```  

---

## **Usage Guide**  
### **Adding a New Client**  
1. Click **"Add Client"** in the toolbar.  
2. Fill in the required details (Name, Email, Phone, etc.).  
3. Save the record.  

### **Editing/Deleting a Client**  
- Select a client from the list.  
- Click **"Edit"** to modify details or **"Delete"** to remove the record.  

### **Searching Clients**  
- Use the search bar to filter clients by name, email, or other criteria.

---

## **Configuration & Customization**  
### **Database Settings**  
- By default, the app uses **SQLite** (`clients.db`).  
- Modify `DatabaseManager.cpp` to switch to **MySQL/PostgreSQL**.  

### **UI Customization**  
- Edit QML files in `/qml` for styling changes.

---

## **Troubleshooting**  
### **Build Errors**  
- Ensure **Qt5** and required modules are installed.  
- Verify **C++ compiler** compatibility (GCC, Clang, MSVC).  

### **Runtime Issues**  
- If the app fails to start, check:  
  - Database permissions (`clients.db` must be writable).  
  - Missing Qt dependencies (`ldd ./ClientManagementSystem` on Linux).  

---

## **Extras**  
### **Web Crawler Program**  
- This system also provides a simple web crawler and html/xml parser to extract a feed content and display it in the app with the link referring to the original content.
- The website link to be parsed is set to **bbc news**, if you want to change this then change the url to your specific site within the code (sorry no dynamicism is established for this).
