#include<iostream>
using namespace std;
int min(int n,int *ptr){
    int mini=*ptr;
    for(int i=0;i<n;i++){
        if(*(ptr+i)<=mini)
            mini=*(ptr+i);
    }
    return mini;
}
int main (){
    int n1,n2,t,ans=0;
    cin>>n1>>n2;

    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];              //for entering the array
    }
    for(int p=0;p<n2;p++){
        cin>>arr2[p];
    }
    int r,cmarr[150]={0},m=0;

     for(int j=1;j<= min(n2,arr2);j++){
        r=0;        //final value of r will indicate whether
                    //the respective number is a common multiple or not

            for(int l=0;l<n1;l++){

                if(j%arr1[l]!=0){
                break;
                }
            r++;
               }
        if(r==n1){
            //cout<<j<<endl;
                cmarr[m]=j;
                m++;

}
}
        for(int s=0;cmarr[s]!=0;s++){
             t=0;
                for(int q=0;q<n2;q++){
                    if (arr2[q]%cmarr[s]!=0)
                    break;

                t++;
            }
            if(t==n2)
               ans++;
            }

            cout<<ans;
        return 0;
        }
