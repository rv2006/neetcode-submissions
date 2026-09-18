/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &m) {
        int l=0;
        int h=m.length()-1;
        int mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            int k1=(mid==h?0:m.get(mid+1));
            int k0=(mid==l?0:m.get(mid-1));
            int k=m.get(mid);
            if(k1<k && k0<k)
            {
                break;
            }
            else if(k1>k && k0<k)
            {
                l=mid+1;
            }
            else if(k0>k && k1<k)
            {
                h=mid-1;
            }
        }
        l=0,h=mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            int k=m.get(mid);
            if(k==target)return mid;
            else if(k>target)
            {
                h=mid-1;
            }
            else 
            {
                l=mid+1;
            }
        }
        l=mid+1,h=m.length()-1;
        while(l<=h)
        {
            mid=(l+h)/2;
            int k=m.get(mid);
            if(k==target)return mid;
            else if(k>target)
            {
                l=mid+1;
            }
            else 
            {
                
                h=mid-1;
            }
        }
        return -1;
    }
};