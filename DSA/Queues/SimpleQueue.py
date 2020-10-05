# Program to describe simple queue push and pop operations
# Tejas Nanaware

# Define push and pop functions
def queue_push(queue, element):
    queue.append(element)
    return queue
    
def queue_pop(queue):
    element = queue.pop(0)
    return element

# Initialize Queue
queue = []

queue = queue_push(queue, 1)
queue = queue_push(queue, 2)
queue = queue_push(queue, 3)

print(queue_pop(queue))
print(queue_pop(queue))
print(queue_pop(queue))
