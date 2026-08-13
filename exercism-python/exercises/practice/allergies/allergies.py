class Allergies:

    def __init__(self, score):
        self.score = score
        self.allergies_name = {
            1: "eggs",
            2: "peanuts",
            4: "shellfish",
            8: "strawberries",
            16: "tomatoes",
            32: "chocolate",
            64: "pollen",
            128: "cats",
        }
    def allergic_to(self, item):
        inverted =  {name: value for value, name in self.allergies_name.items()}
        item = inverted[item]
        for value, allergy in self.allergies_name.items():
            if (item & value) == value:
                return True
        return False
    @property
    def lst(self):
        self.allergies = []
        for value, allergy in self.allergies_name.items():
            if (self.score & value) == value:
                self.allergies.append(allergy)
        return self.allergies
       
