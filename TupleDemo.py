print("Demonstration of Tuple")

# characteristics of tuple data type
# Data : Heterogeneous
# Ordered : Yes
# Indexed : Yes
# ** Mutable : No
# Duplicates : Yes
# ** fast -stored in read only memory

data = (11,21,51,101,21,11)             # Duplicates
data1 = (11, 90.80, True, "Hello")      # Heterogeneous

print("Data is Heterogeneous : ",data1)
print("Data is Ordered : ",data1)
print("Data at index 2 : ",data1[2])
print("Data with duplicate elements : ",data)

