std::vector<int> vec; 
for (int i = 0; i < 10; ++i) { 
 vec.push_back(i); 
}
// Safe access using at() which throws an exception if out of bounds
try { 
 vec.at(5) = 50; // Accessing a valid element
 vec.at(10) = 100; // This will throw an exception 
} catch (const std::out_of_range& oor) { 
 std::cerr << "Out of Range error: " << oor.what() << '\n'; 
}
//Another way to avoid out of bounds access
for(size_t i = 0; i < vec.size(); ++i) { 
 vec[i] *= 2; //Process only within the valid range
}
