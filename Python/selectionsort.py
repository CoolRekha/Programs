
#test array
arr=[5,2,3,1,4]

#function starts
def selectionsort(arr):
    
    #first loop
    for i in range(0,len(arr),1):

        #identifying position of least valued item in array    
        minpos= i
        
        #inner loop
        for j in range(i,len(arr),1):
           
            #comparing the values to find the minimum value
            if(arr[j]<arr[minpos]):
                minpos=j
       
        #swapping the values
        temp=arr[i]
        arr[i]=arr[minpos]
        arr[minpos]=temp
    
    #printing the array
    print(arr)


#function calling
selectionsort(arr)
