?> Consider_this_problem::
There are N≤5000 workers. Each worker is available during some days of this month (which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30], representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for the job — maximize the number of days when both these workers are available.
//----------------------------------------------------------------------------------------------------
>> You can compute the intersection of two workers (two sets) in O(30)
 by using e.g. two pointers for two sorted sequences. Doing that for every pair of workers is O(N2⋅30)
, slightly too slow.
                        //----------------------------
**>> We can think about the availability of a worker as a binary string of length 30
, which can be stored in a single int. With this representation, we can count the intersection size in O(1) by using            __builtin_popcount(x[i] & x[j])
The complexity becomes O(N2), fast enough.



//----------------------------------------------------------------------------------------------------

What if we are given the availability for the whole year or in general for D days? We can handle D≤64 in a single unsigned long long, what about bigger D?

We can split D days into convenient parts of size 64 and store the availability of a single worker in an array of D64 unsigned long longs. Then, the intersection can be computed in O(D64) and the whole complexity is O(N2⋅D64).

code::
const int K = MAX_D / 64 + 1;
unsigned long long x[MAX_N][K];
int intersection(int i, int j) {
	int total = 0;
	for(int z = 0; z < K; z++) {
		total += __builtin_popcountll(x[i][z] & x[j][z]);
	}
	return total;
}
//----------------------------------------------------------------------------------------------------