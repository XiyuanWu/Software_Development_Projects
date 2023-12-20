def read_tasks_from_file(filename):
    tasks = []
    try:
        with open(filename, 'r') as file:
            tasks = file.readlines()
    except FileNotFoundError:
        open(filename, 'w').close()  # Create the file if it doesn't exist
    return [task.strip() for task in tasks]

def write_tasks_to_file(filename, tasks):
    with open(filename, 'w') as file:
        for task in tasks:
            file.write(task + '\n')

def add_task(tasks, task):
    tasks.append(task)
    write_tasks_to_file('tasks.txt', tasks)

def display_tasks(tasks):
    for index, task in enumerate(tasks, start=1):
        print(f"{index}. {task}")

def delete_task(tasks, index):
    if 0 <= index < len(tasks):
        tasks.pop(index)
        write_tasks_to_file('tasks.txt', tasks)

def main():
    tasks = read_tasks_from_file('tasks.txt')

    while True:
        print("\nTo-Do List:")
        print("1. Add Task")
        print("2. Display Tasks")
        print("3. Delete Task")
        print("4. Exit")
        choice = input("Enter your choice: ")

        if choice == '1':
            task = input("Enter the task: ")
            add_task(tasks, task)
        elif choice == '2':
            display_tasks(tasks)
        elif choice == '3':
            index = int(input("Enter task number to delete: ")) - 1
            delete_task(tasks, index)
        elif choice == '4':
            break
        else:
            print("Invalid choice, please try again.")

if __name__ == "__main__":
    main()
