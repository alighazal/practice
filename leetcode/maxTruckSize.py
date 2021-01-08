class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        
        sorted_boxTypes = sorted(boxTypes, key = lambda  boxTypes: boxTypes[1] )[::-1] 
        
        max_size = 0
        
        for box in sorted_boxTypes:
                       
            if (box[0] == truckSize ):
                max_size +=  box[0] * box[1]
                break
            elif (box[0] < truckSize ):
                max_size += box[0] * box[1]
                truckSize -=  box[0]
            else:
                max_size += truckSize * box[1]
                truckSize = 0
        
        return max_size
            
                
        