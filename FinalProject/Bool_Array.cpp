#include"Bool_Array.h"
#include"math.h"
boolean_array create_boolean_array(integer n){
  boolean_array_true result = new boolean[n];
  return result;
};
boolean_array_true create_boolean_array_true(integer n){
    boolean_array_true result = new boolean[n];
    for(integer i = 0; i <= n; i++){
      result[i] = true;
    };
    return result;
};
ostream& write_boolean_array_eratostenes(ostream& os, boolean_array a, integer n){
    for(integer b = 2; b <= n; b++ ){
      if(a[b]){
        os<<b;
      };
    };
    return os;
};

boolean_array remove_multiply(boolean_array a, integer n, integer p){
  for(integer lp = 2*p; lp <= n; lp+=p){
    a[lp] = false;
  };
};
boolean_array criba(boolean_array a, integer n, integer k){
  if(k > 1){
    a = criba(a, n, k-1);
    if(a[k]){
      a = remove_multiply(a, n, k);
    };
  };
  return a;
};
boolean_array criba_eratostenes(integer n){
  boolean_array_true a = create_boolean_array_true(n+1);
  a[0] = false;
  a[1] = false;
  return criba(a, n,(int)sqrt(n));
};


