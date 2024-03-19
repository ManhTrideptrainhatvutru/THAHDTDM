from ._anvil_designer import Form1Template
from anvil import *
import anvil.server
import anvil.tables as tables
import anvil.tables.query as q
from anvil.tables import app_tables

class Form1(Form1Template):
  def __init__(self, *args, **kwargs):
    super().__init__(*args, **kwargs)

  def btnSort_click(self, **event_args):
    numbers = self.txtNumbers.text.split(" ")
    numbers = list(map(int, numbers))
    sorted_numbers = anvil.server.call("selection_sort", numbers)
    self.lblSortedNumbers.text = " ".join(map(str, sorted_numbers))
    print(numbers)
    print(sorted_numbers)
    pass