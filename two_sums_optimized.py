class TwoSums:
    def __init__(self, target, input_arr) -> None:
        self.target = target
        self.input = input_arr

    def solution(self):
        hash_map = {}
        for i, number in enumerate(self.input):
            diff = self.target - number
            if diff in hash_map.keys():
                return(i, hash_map[diff])
            else:
                hash_map[number] = i



input = [2,3,4,5]
target = 6

object = TwoSums(target, input)
required_indices = object.solution()
print(f"Indices are {required_indices[0]} and {required_indices[1]}")
