std::vector<int> vec; 
for (int i = 0; i < 10; ++i) { 
  vec.push_back(i); 
}
int* ptr = vec.data();
ptr[10] = 100; //Accessing memory beyond vector bounds