void nr_cif_zero(int n, int &nr){
  if(n <= 9 and n) nr = 0;
  else {
    if(n < 9 && !n) nr = 1; 
    else{
        nr_cif_zero(n/10, nr);
        if(!(n % 10)) nr++;
    }
  }
}
