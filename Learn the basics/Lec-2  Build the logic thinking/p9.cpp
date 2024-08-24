void nStarDiamond(int n) {
    // Write your code here.


    // Upper part


    for(int i=0;i<n;i++){



// Space 
for(int j = 0; j<n-i-1; j++){
    cout<<" ";
}



// Star

for(int j=0;j<2*i+1;j++){
    cout<<"*";
}




// Space 
for(int j = 0; j<n-i-1; j++){
    cout<<" ";
}

cout<<endl;
}

// Reverse
for(int i=0; i<n; i++){

// Space

for(int j=0; j<i;j++){
    cout<<" ";
}


// star
for(int j=0; j<2*n - (2*i+1);j++){
    cout<<"*";
}


// Space
for(int j=0; j<i;j++){
    cout<<" ";
}
cout<<endl;


}


}