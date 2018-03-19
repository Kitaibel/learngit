m0=10000;
m=m0;
r=4.25/100;
k=0;
while m<2*m0;
    k=k+1;
    m=m*(1+r);
end
disp(k);