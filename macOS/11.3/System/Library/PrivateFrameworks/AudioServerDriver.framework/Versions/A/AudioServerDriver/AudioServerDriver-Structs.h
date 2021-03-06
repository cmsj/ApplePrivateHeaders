/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/Versions/A/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _compressed_pair<AudioRingBuffer *, std::__1::default_delete<AudioRingBuffer>> {
	AudioRingBuffer __value_;
} compressed_pair<AudioRingBuffer *, std::__1::default_delete<AudioRingBuffer>>;

typedef struct unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer>> {
	compressed_pair<AudioRingBuffer *, std::__1::default_delete<AudioRingBuffer>> __ptr_;
} unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer>>;

typedef struct shared_ptr<DSPGraph::Graph> {
	Graph __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<DSPGraph::Graph>;

typedef struct _compressed_pair<ASDDSPStreamHelper *, std::__1::default_delete<ASDDSPStreamHelper>> {
	ASDDSPStreamHelper __value_;
} compressed_pair<ASDDSPStreamHelper *, std::__1::default_delete<ASDDSPStreamHelper>>;

typedef struct unique_ptr<ASDDSPStreamHelper, std::__1::default_delete<ASDDSPStreamHelper>> {
	compressed_pair<ASDDSPStreamHelper *, std::__1::default_delete<ASDDSPStreamHelper>> __ptr_;
} unique_ptr<ASDDSPStreamHelper, std::__1::default_delete<ASDDSPStreamHelper>>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<ASDDSPGraphHelper, void *>>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<ASDDSPGraphHelper, void *>>>;

typedef struct _list_node_base<ASDDSPGraphHelper, void *> {
	__list_node_base<ASDDSPGraphHelper, void *> __prev_;
	__list_node_base<ASDDSPGraphHelper, void *> __next_;
} list_node_base<ASDDSPGraphHelper, void *>;

typedef struct list<ASDDSPGraphHelper, std::__1::allocator<ASDDSPGraphHelper>> {
	list_node_base<ASDDSPGraphHelper, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<ASDDSPGraphHelper, void *>>> __size_alloc_;
} list<ASDDSPGraphHelper, std::__1::allocator<ASDDSPGraphHelper>>;

typedef struct _compressed_pair<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> *, std::__1::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>> {
	guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> __value_;
} compressed_pair<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> *, std::__1::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>>;

typedef struct unique_ptr<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>, std::__1::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>> {
	compressed_pair<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> *, std::__1::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>> __ptr_;
} unique_ptr<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>, std::__1::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>>;

typedef struct SMPTETime {
	short mSubframes;
	short mSubframeDivisor;
	unsigned mCounter;
	unsigned mType;
	unsigned mFlags;
	short mHours;
	short mMinutes;
	short mSeconds;
	short mFrames;
} SMPTETime;

typedef struct AudioTimeStamp {
	double mSampleTime;
	unsigned long long mHostTime;
	double mRateScalar;
	unsigned long long mWordClockTime;
	SMPTETime mSMPTETime;
	unsigned mFlags;
	unsigned mReserved;
} AudioTimeStamp;

typedef struct AudioServerPlugInIOCycleInfo {
	unsigned long long mIOCycleCounter;
	unsigned mNominalIOBufferFrameSize;
	AudioTimeStamp mCurrentTime;
	AudioTimeStamp mInputTime;
	AudioTimeStamp mOutputTime;
	double mMasterHostTicksPerFrame;
	double mDeviceHostTicksPerFrame;
} AudioServerPlugInIOCycleInfo;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct _compressed_pair<ASDSRCStreamHelper *, std::__1::default_delete<ASDSRCStreamHelper>> {
	ASDSRCStreamHelper __value_;
} compressed_pair<ASDSRCStreamHelper *, std::__1::default_delete<ASDSRCStreamHelper>>;

typedef struct unique_ptr<ASDSRCStreamHelper, std::__1::default_delete<ASDSRCStreamHelper>> {
	compressed_pair<ASDSRCStreamHelper *, std::__1::default_delete<ASDSRCStreamHelper>> __ptr_;
} unique_ptr<ASDSRCStreamHelper, std::__1::default_delete<ASDSRCStreamHelper>>;

typedef struct {
	unsigned char valid;
	double sampleTime;
	unsigned long long hostTime;
	unsigned long long seed;
} SCD_Struct_AS16;

typedef struct _compressed_pair<DSPGraph::Interpreter *, std::__1::default_delete<DSPGraph::Interpreter>> {
	Interpreter __value_;
} compressed_pair<DSPGraph::Interpreter *, std::__1::default_delete<DSPGraph::Interpreter>>;

typedef struct unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter>> {
	compressed_pair<DSPGraph::Interpreter *, std::__1::default_delete<DSPGraph::Interpreter>> __ptr_;
} unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter>>;

typedef struct _NSZone* NSZoneRef;

typedef struct AudioObjectPropertyAddress {
	unsigned mSelector;
	unsigned mScope;
	unsigned mElement;
} AudioObjectPropertyAddress;

typedef struct _compressed_pair<ASDBufferList *, std::__1::default_delete<ASDBufferList>> {
	ASDBufferList __value_;
} compressed_pair<ASDBufferList *, std::__1::default_delete<ASDBufferList>>;

typedef struct unique_ptr<ASDBufferList, std::__1::default_delete<ASDBufferList>> {
	compressed_pair<ASDBufferList *, std::__1::default_delete<ASDBufferList>> __ptr_;
} unique_ptr<ASDBufferList, std::__1::default_delete<ASDBufferList>>;

typedef struct ASDSliderRange {
	unsigned mMinimum;
	unsigned mMaximum;
} ASDSliderRange;

