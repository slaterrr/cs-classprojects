#This is the introduction, which greets the user and prompts it with a selection
print("Welcome to the UA Contact List Manager Application!\n")

contacts = []

#Add contact function-------------------------------------------------
def contact_add(name,email):
    contacts.append({"name": name, "email": email}) #Note: I want to make it so the names display neater
    print(f"Added: {name} ({email})\n")

#prompt to add contacts-----------------------------------------------
def contactadd_prompt():
    name = input("Enter name: ")
    email = input("Enter email: ")
    contact_add(name,email)

#displays all contacts------------------------------------------------
def contact_display():
    print("All contacts:",contacts)

#searches for contacts------------------------------------------------
def contact_search():
    keyword = input("Search for contact: ").lower()
    
#Here I should add a portion that takes the keyword from the input and checks every contact if the keyword is included
#if it is, then it should add it to a new temporary list, and display it to the user in an organized format
#if not, it should display a message telling the user that no contacts were found with the keyword
   

#Asks user to select from choices: Add contact, search contact, and list all contacts
def contact_selection():
    selection = input("Would you like to:\n\tAdd a contact(1)\n\tAccess all contacts(2)\n\tSearch for a contact(3)\n")
    if selection == '1':
        contactadd_prompt()
        contact_selection()
    elif selection == '2':
        contact_display()
        contact_selection()
    elif selection == '3':
        contact_search()
        contact_selection()
    else:
        print("Invalid selection. Please try again")
        contact_selection()
        
contact_selection()

