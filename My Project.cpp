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
    int n,num,t,ans=0,g=0;
    cin>>n>>num;

    int arr1[n],arr2[num];
    for(int i=0;i<n;i++){
        cin>>arr1[i];              //for entering the array
    }
    for(int p=0;p<num;p++){
        cin>>arr2[p];
    }
    int r,cmarr[150]={0},m=0;

     for(int j=1;j<= min(num,arr2);j++){
        r=0;        //final value of r will indicate whether
                    //the respective number is a common multiple or not

            for(int l=0;l<n;l++){

                if(j%arr1[l]!=0){
                break;
                }
            r++;
               }
        if(r==n){
            //cout<<j<<endl;
                cmarr[m]=j;
                m++;

}
}
        /**/
    for(int b=0;b<150;b++){
        if(cmarr[b]==0)
            break;
        else
            g++;
    }
            //cout<<g<<endl;
        for(int s=0;s<g;s++){
             t=0;
                for(int q=0;q<num;q++){
                    if (arr2[q]%cmarr[s]!=0)
                    break;

                t++;
            }
            if(t==num)
               ans++;
            }
        /*    for(int e=0;e<g;e++){
            cout<<cmarr[e]<<endl;
        }*/
            cout<<ans;
        return 0;
        }

