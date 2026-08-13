class BankAccount:
    def __init__(self):
        self.balance = 0
        self.open_var = False
    def get_balance(self):
        return self.balance
    def open(self):
        if self.open_var:
            raise ValueError("account already open")
        self.open_var = True
        

    def deposit(self, amount):
        if not self.open_var:
            raise ValueError("account not open")
        if amount > 0:
            self.balance += amount
            return
        raise ValueError("amount must be greater than 0")
    def withdraw(self, amount):
        if not self.open_var:
            raise ValueError("account not open")
        if amount > self.balance:
            raise ValueError("amount must be less than balance")
        if amount > 0:
            self.balance -= amount
            return
        raise ValueError("amount must be greater than 0")

    def close(self):
        if not self.open_var:
            raise ValueError("account not open")
        self.open_var = False
