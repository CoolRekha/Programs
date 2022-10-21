// Check if two strings are anagrams of each other

import java.util.*;

public class Anagram {
  public static void main(String[] args){
		String firstString = "race";
		String secondString = "care";

		if (isAnagram(firstString, secondString))
			System.out.print("Given strings are anagrams of each other");
		else
			System.out.print("Given strings are not anagrams of each other");
	}
  
	public static boolean isAnagram(String firstString, String secondString){
		if (firstString.length() != secondString.length())
			return false;
    
		HashMap<Character, Integer> map = new HashMap<>();
		
		for (int i = 0; i < firstString.length(); i++) {
			if (map.containsKey(firstString.charAt(i))) {
				map.put(firstString.charAt(i),
						map.get(firstString.charAt(i)) + 1);
			}
			else {
				map.put(firstString.charAt(i), 1);
			}
		}
	
		for (int i = 0; i < secondString.length(); i++) {
			if (map.containsKey(secondString.charAt(i))) {
				map.put(secondString.charAt(i),
						map.get(secondString.charAt(i)) - 1);
			}
			else {
				return false;
			}
		}
		Set<Character> keys = map.keySet();
		for (Character key : keys) {
			if (map.get(key) != 0) {
				return false;
			}
		}
		return true;
	}
}
