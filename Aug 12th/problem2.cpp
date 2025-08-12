// Soft Drinking (Problem 151A)
// Statement: A group of friends bought several bottles of a soft drink, limes (cut into slices), and some salt. Each toast requires a certain amount of drink, a lime slice, and salt. Determine the maximum number of toasts each friend can make such that all drink the same amount.

# include <iostream> 
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int p1= k*l/nl;
    int p2= c*d;
    int p3= p/np;

    int ans=0;
    ans= min(p1,min(p2,p3));
    ans=ans/n;

    cout<<ans<<endl;
}