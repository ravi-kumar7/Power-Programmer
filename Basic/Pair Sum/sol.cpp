#include <iostream>
#include <vector>
#include <unordered_set>


bool hasPairWithSum(std::vector<int> data, int sum){
    std::unordered_set<int> comp; //complements
    for(int value:data){
        if(comp.find(value)!=comp.end())
            return true;
        comp.insert(sum-value);
    }
    return false;
}

int main(){
    int target = 8;
    std::vector<int> v_1{1,2,3,9};
    std::cout<<hasPairWithSum(v_1,target);
    std::vector<int> v_2{1, 2, 4, 4};
    std::cout<<hasPairWithSum(v_2,target);
    return 0;
}