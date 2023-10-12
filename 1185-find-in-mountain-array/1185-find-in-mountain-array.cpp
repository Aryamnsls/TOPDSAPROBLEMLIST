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
    int findInMountainArray(int target, MountainArray &mountainArr) {
         int start = 0;
    int end = mountainArr.length() - 1;

    // Binary search to find the peak element
    while (start < end) {
        int mid = start + (end - start) / 2;
        int midValue = mountainArr.get(mid);
        int nextValue = mountainArr.get(mid + 1);

        if (midValue < nextValue) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    int peakIndex = start;

    // Binary search in the ascending subarray (left of the peak)
    start = 0;
    end = peakIndex;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        int midValue = mountainArr.get(mid);

        if (midValue == target) {
            return mid;
        } else if (midValue < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    // Binary search in the descending subarray (right of the peak)
    start = peakIndex + 1;
    end = mountainArr.length() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        int midValue = mountainArr.get(mid);

        if (midValue == target) {
            return mid;
        } else if (midValue > target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;  // Target not found
    }
};