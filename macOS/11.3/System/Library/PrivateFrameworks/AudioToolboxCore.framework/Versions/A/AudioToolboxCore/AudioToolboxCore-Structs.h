/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/Versions/A/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AUAudioUnit, AUAudioUnit_XPC, NSXPCConnection;

typedef struct _compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent>>> {
	shared_ptr<APComponent> __value_;
} compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent>>>;

typedef struct AudioComponentVector {
	shared_ptr<APComponent> __begin_;
	shared_ptr<APComponent> __end_;
	compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent>>> __end_cap_;
	BOOL mSorted;
} AudioComponentVector;

typedef struct AudioComponentDescription {
	unsigned componentType;
	unsigned componentSubType;
	unsigned componentManufacturer;
	unsigned componentFlags;
	unsigned componentFlagsMask;
} AudioComponentDescription;

typedef struct _thread_id {
	_opaque_pthread_t __id_;
} thread_id;

typedef struct optional<std::__1::__thread_id> {
	/*function pointer*/void* ;
	char __null_state_;
	thread_id) __val_;
	BOOL __engaged_;
} optional<std::__1::__thread_id>;

typedef struct AUOOPRenderingServerUser {
	/*function pointer*/void* _vptr$CAPrint;
	unsigned mSerialNum;
	AUAudioUnit* mAUAudioUnit;
	/*^block*/id mRetainedRenderBlock;
	/*^block*/id mRenderBlock;
	BOOL mCanProcessInPlace;
	BOOL mIsV2AudioUnit;
	long long mMIDIOutBaseSampleTime;
	AUEventSchedule mEventSchedule;
	AUOOPSharedMemory mSharedBuffers;
	optional<std::__1::__thread_id> mRenderThreadId;
} AUOOPRenderingServerUser;

typedef struct optional<AUOOPRenderingServerUser> {
	/*function pointer*/void* ;
	char __null_state_;
	AUOOPRenderingServerUser) __val_;
	BOOL __engaged_;
} optional<AUOOPRenderingServerUser>;

typedef struct type {
	unsigned char __lx[32];
} type;

typedef struct _value_func<void ()> {
	type __buf_;
	__base<void ()> __f_;
} value_func<void ()>;

typedef struct function<void ()> {
	value_func<void ()> __f_;
} function<void ()>;

typedef struct reply_watchdog_factory {
	BOOL mDebugging;
	int mDefaultTimeoutMS;
	function<void ()> mTimeoutHandler;
} reply_watchdog_factory;

typedef struct shared_ptr<auoop::WorkgroupMirror> {
	WorkgroupMirror __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<auoop::WorkgroupMirror>;

typedef struct _compressed_pair<KVOAggregator::Record *, std::__1::allocator<KVOAggregator::Record>> {
	Record __value_;
} compressed_pair<KVOAggregator::Record *, std::__1::allocator<KVOAggregator::Record>>;

typedef struct vector<KVOAggregator::Record, std::__1::allocator<KVOAggregator::Record>> {
	Record __begin_;
	Record __end_;
	compressed_pair<KVOAggregator::Record *, std::__1::allocator<KVOAggregator::Record>> __end_cap_;
} vector<KVOAggregator::Record, std::__1::allocator<KVOAggregator::Record>>;

typedef struct KVOAggregator {
	vector<KVOAggregator::Record, std::__1::allocator<KVOAggregator::Record>> mRecords;
} KVOAggregator;

typedef struct _compressed_pair<CADeprecated::CAMutex *, std::__1::default_delete<CADeprecated::CAMutex>> {
	CAMutex __value_;
} compressed_pair<CADeprecated::CAMutex *, std::__1::default_delete<CADeprecated::CAMutex>>;

typedef struct unique_ptr<CADeprecated::CAMutex, std::__1::default_delete<CADeprecated::CAMutex>> {
	compressed_pair<CADeprecated::CAMutex *, std::__1::default_delete<CADeprecated::CAMutex>> __ptr_;
} unique_ptr<CADeprecated::CAMutex, std::__1::default_delete<CADeprecated::CAMutex>>;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, std::__1::less<unsigned int>, true>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, std::__1::less<unsigned int>, true>>;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, void *>>> {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, void *>>>;

typedef struct _tree<std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, RemoteAUHandleInfo>>> {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, void *>>> __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, std::__1::less<unsigned int>, true>> __pair3_;
} tree<std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, RemoteAUHandleInfo>>>;

typedef struct map<unsigned int, RemoteAUHandleInfo, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, RemoteAUHandleInfo>>> {
	tree<std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, RemoteAUHandleInfo>>> __tree_;
} map<unsigned int, RemoteAUHandleInfo, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, RemoteAUHandleInfo>>>;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, AUProcessingBlock>, std::__1::less<unsigned int>, true>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, AUProcessingBlock>, std::__1::less<unsigned int>, true>>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, AUProcessingBlock>, void *>>> {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, AUProcessingBlock>, void *>>>;

typedef struct _tree<std::__1::__value_type<unsigned int, AUProcessingBlock>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, AUProcessingBlock>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, AUProcessingBlock>>> {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, AUProcessingBlock>, void *>>> __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, AUProcessingBlock>, std::__1::less<unsigned int>, true>> __pair3_;
} tree<std::__1::__value_type<unsigned int, AUProcessingBlock>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, AUProcessingBlock>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, AUProcessingBlock>>>;

typedef struct map<unsigned int, AUProcessingBlock, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, AUProcessingBlock>>> {
	tree<std::__1::__value_type<unsigned int, AUProcessingBlock>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, AUProcessingBlock>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, AUProcessingBlock>>> __tree_;
} map<unsigned int, AUProcessingBlock, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, AUProcessingBlock>>>;

typedef struct _compressed_pair<TestAUProcessingBlock *, std::__1::default_delete<TestAUProcessingBlock>> {
	TestAUProcessingBlock __value_;
} compressed_pair<TestAUProcessingBlock *, std::__1::default_delete<TestAUProcessingBlock>>;

typedef struct unique_ptr<TestAUProcessingBlock, std::__1::default_delete<TestAUProcessingBlock>> {
	compressed_pair<TestAUProcessingBlock *, std::__1::default_delete<TestAUProcessingBlock>> __ptr_;
} unique_ptr<TestAUProcessingBlock, std::__1::default_delete<TestAUProcessingBlock>>;

typedef struct _NSZone* NSZoneRef;

typedef struct OpaqueAUPB* OpaqueAUPBRef;

typedef struct OpaqueRemoteAudioUnit* OpaqueRemoteAudioUnitRef;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct recursive_mutex {
	opaque_pthread_mutex_t __m_;
} recursive_mutex;

typedef struct mach_timebase_info {
	unsigned numer;
	unsigned denom;
} mach_timebase_info;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct _compressed_pair<AUProcAndUserData *, std::__1::default_delete<AUProcAndUserData>> {
	AUProcAndUserData __value_;
} compressed_pair<AUProcAndUserData *, std::__1::default_delete<AUProcAndUserData>>;

typedef struct unique_ptr<AUProcAndUserData, std::__1::default_delete<AUProcAndUserData>> {
	compressed_pair<AUProcAndUserData *, std::__1::default_delete<AUProcAndUserData>> __ptr_;
} unique_ptr<AUProcAndUserData, std::__1::default_delete<AUProcAndUserData>>;

typedef struct _compressed_pair<AUAudioUnit_XPC_PropListener *, std::__1::allocator<AUAudioUnit_XPC_PropListener>> {
	AUAudioUnit_XPC_PropListener __value_;
} compressed_pair<AUAudioUnit_XPC_PropListener *, std::__1::allocator<AUAudioUnit_XPC_PropListener>>;

typedef struct vector<AUAudioUnit_XPC_PropListener, std::__1::allocator<AUAudioUnit_XPC_PropListener>> {
	AUAudioUnit_XPC_PropListener __begin_;
	AUAudioUnit_XPC_PropListener __end_;
	compressed_pair<AUAudioUnit_XPC_PropListener *, std::__1::allocator<AUAudioUnit_XPC_PropListener>> __end_cap_;
} vector<AUAudioUnit_XPC_PropListener, std::__1::allocator<AUAudioUnit_XPC_PropListener>>;

typedef struct shared_ptr<caulk::synchronized<auoop::RenderPipePool, std::__1::recursive_mutex, caulk::empty_atomic_interface<auoop::RenderPipePool>>> {
	synchronized<auoop::RenderPipePool, std::__1::recursive_mutex, caulk::empty_atomic_interface<auoop::RenderPipePool>> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<caulk::synchronized<auoop::RenderPipePool, std::__1::recursive_mutex, caulk::empty_atomic_interface<auoop::RenderPipePool>>>;

typedef struct AUOOPRenderClientUser {
	AUAudioUnit_XPC* au;
	NSXPCConnection* xpcConnection;
	/*^block*/id musicalContextBlock;
	/*^block*/id transportStateBlock;
	/*^block*/id MIDIOutputEventBlock;
	unsigned serviceProcessAUInstanceToken;
	BOOL isOffline;
	BOOL isMIDIProcessor;
} AUOOPRenderClientUser;

typedef struct _cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>> {
	AB __a_value;
} cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
	cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct RenderPipeUser {
	PipeSubPool mPipeSubPool;
	AUOOPRenderClientUser mRenderClientUser;
	atomic<bool> mInvalidated;
} RenderPipeUser;

typedef struct optional<auoop::RenderPipeUser> {
	/*function pointer*/void* ;
	char __null_state_;
	RenderPipeUser) __val_;
	BOOL __engaged_;
} optional<auoop::RenderPipeUser>;

typedef struct _compressed_pair<AUHostingServiceClient *, std::__1::default_delete<AUHostingServiceClient>> {
	AUHostingServiceClient __value_;
} compressed_pair<AUHostingServiceClient *, std::__1::default_delete<AUHostingServiceClient>>;

typedef struct unique_ptr<AUHostingServiceClient, std::__1::default_delete<AUHostingServiceClient>> {
	compressed_pair<AUHostingServiceClient *, std::__1::default_delete<AUHostingServiceClient>> __ptr_;
} unique_ptr<AUHostingServiceClient, std::__1::default_delete<AUHostingServiceClient>>;

typedef struct shared_ptr<APComponent> {
	APComponent __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<APComponent>;

typedef struct OpaqueAudioComponent* OpaqueAudioComponentRef;

typedef struct semaphore {
	unsigned mMachSem;
	BOOL mOwned;
} semaphore;

typedef struct _cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>> {
	Ai __a_value;
} cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>>;

typedef struct RenderContextChangeGenerator {
	void mLastWorkgroup;
	/*^block*/id mObserver;
} RenderContextChangeGenerator;

typedef struct optional<RenderContextChangeGenerator> {
	/*function pointer*/void* ;
	char __null_state_;
	RenderContextChangeGenerator) __val_;
	BOOL __engaged_;
} optional<RenderContextChangeGenerator>;

typedef struct atomic<int> {
	cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>> __a_;
} atomic<int>;

typedef struct _cxx_atomic_impl<AUv2GetParameterSynchronizer::SeqNumPair, std::__1::__cxx_atomic_base_impl<AUv2GetParameterSynchronizer::SeqNumPair>> {
	ASeqNumPair __a_value;
} cxx_atomic_impl<AUv2GetParameterSynchronizer::SeqNumPair, std::__1::__cxx_atomic_base_impl<AUv2GetParameterSynchronizer::SeqNumPair>>;

typedef struct atomic<AUv2GetParameterSynchronizer::SeqNumPair> {
	cxx_atomic_impl<AUv2GetParameterSynchronizer::SeqNumPair, std::__1::__cxx_atomic_base_impl<AUv2GetParameterSynchronizer::SeqNumPair>> __a_;
} atomic<AUv2GetParameterSynchronizer::SeqNumPair>;

typedef struct AUv2GetParameterSynchronizer {
	atomic<AUv2GetParameterSynchronizer::SeqNumPair> mSeqNums;
	semaphore mSyncGetParamSema;
} AUv2GetParameterSynchronizer;

typedef struct _cxx_atomic_impl<PreviousRenderTime::Snapshot, std::__1::__cxx_atomic_base_impl<PreviousRenderTime::Snapshot>> {
	ASnapshot __a_value;
} cxx_atomic_impl<PreviousRenderTime::Snapshot, std::__1::__cxx_atomic_base_impl<PreviousRenderTime::Snapshot>>;

typedef struct atomic<PreviousRenderTime::Snapshot> {
	cxx_atomic_impl<PreviousRenderTime::Snapshot, std::__1::__cxx_atomic_base_impl<PreviousRenderTime::Snapshot>> __a_;
} atomic<PreviousRenderTime::Snapshot>;

typedef struct PreviousRenderTime {
	double mSampleRate;
	atomic<PreviousRenderTime::Snapshot> mLastRender;
} PreviousRenderTime;

typedef struct _cxx_atomic_impl<AURenderEventNode *, std::__1::__cxx_atomic_base_impl<AURenderEventNode *>> {
	AAURenderEventNode __a_value;
} cxx_atomic_impl<AURenderEventNode *, std::__1::__cxx_atomic_base_impl<AURenderEventNode *>>;

typedef struct atomic<AURenderEventNode *> {
	cxx_atomic_impl<AURenderEventNode *, std::__1::__cxx_atomic_base_impl<AURenderEventNode *>> __a_;
} atomic<AURenderEventNode *>;

typedef struct lf_mpsc_queue<AURenderEventNode, caulk::concurrent::intrusive_single_link_member<AURenderEventNode, &AURenderEventNode::next>> {
	atomic<AURenderEventNode *> mEnqueueHead;
	void* mCachelineSeparation[7];
	AURenderEventNode mDequeueHead;
} lf_mpsc_queue<AURenderEventNode, caulk::concurrent::intrusive_single_link_member<AURenderEventNode, &AURenderEventNode::next>>;

typedef struct AUEventSchedule {
	AUv2GetParameterSynchronizer mAUv2GetParameterSynchronizer;
	AURenderEventAllocator mAllocator;
	AUScheduledParameterRefresher2 mScheduledParameterRefresher;
	lf_mpsc_queue<AURenderEventNode, caulk::concurrent::intrusive_single_link_member<AURenderEventNode, &AURenderEventNode::next>> mAddedEventQueue;
	atomic<bool> mHavePendingSetParameter;
	(AURenderEvent) mScheduleHead;
	void mOwningAU;
	/*^block*/id mRenderBlock;
	PreviousRenderTime mPreviousRenderTime;
} AUEventSchedule;

typedef struct NodeStack {
	Node mHead;
} NodeStack;

typedef struct TThreadSafeList<RenderObserver> {
	NodeStack mActiveList;
	NodeStack mPendingList;
	NodeStack mFreeList;
} TThreadSafeList<RenderObserver>;

typedef struct RenderObserverList {
	TThreadSafeList<RenderObserver> mObservers;
	BOOL mTouched;
} RenderObserverList;

typedef struct _cxx_atomic_impl<caulk::pooled_semaphore_mutex::CountAndSema, std::__1::__cxx_atomic_base_impl<caulk::pooled_semaphore_mutex::CountAndSema>> {
	ACountAndSema __a_value;
} cxx_atomic_impl<caulk::pooled_semaphore_mutex::CountAndSema, std::__1::__cxx_atomic_base_impl<caulk::pooled_semaphore_mutex::CountAndSema>>;

typedef struct atomic<caulk::pooled_semaphore_mutex::CountAndSema> {
	cxx_atomic_impl<caulk::pooled_semaphore_mutex::CountAndSema, std::__1::__cxx_atomic_base_impl<caulk::pooled_semaphore_mutex::CountAndSema>> __a_;
} atomic<caulk::pooled_semaphore_mutex::CountAndSema>;

typedef struct pooled_semaphore_mutex {
	atomic<caulk::pooled_semaphore_mutex::CountAndSema> mCountAndSema;
} pooled_semaphore_mutex;

typedef struct RealtimeState {
	pooled_semaphore_mutex mMultipleRenderMutex;
	pooled_semaphore_mutex mResetVsRenderMutex;
	RenderObserverList renderObserverList;
	AUEventSchedule eventSchedule;
	AUv2GetParameterSynchronizer auv2GetParameterSynchronizer;
	optional<RenderContextChangeGenerator> contextChangeGenerator;
	int renderBlockType;
} RealtimeState;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_AU72;

typedef struct _compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver>> {
	BusPropertyObserver __value_;
} compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver>>;

typedef struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver>> {
	BusPropertyObserver __begin_;
	BusPropertyObserver __end_;
	compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver>> __end_cap_;
} vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver>>;

typedef struct shared_ptr<AUObserverController> {
	AUObserverController __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<AUObserverController>;

typedef struct AURemoteParameterObserver* AURemoteParameterObserverRef;

typedef struct _compressed_pair<AddressToParameter *, std::__1::allocator<AddressToParameter>> {
	AddressToParameter __value_;
} compressed_pair<AddressToParameter *, std::__1::allocator<AddressToParameter>>;

typedef struct vector<AddressToParameter, std::__1::allocator<AddressToParameter>> {
	AddressToParameter __begin_;
	AddressToParameter __end_;
	compressed_pair<AddressToParameter *, std::__1::allocator<AddressToParameter>> __end_cap_;
} vector<AddressToParameter, std::__1::allocator<AddressToParameter>>;

typedef struct OpaqueAUPBServer* OpaqueAUPBServerRef;

typedef struct _compressed_pair<NSObject<OS_dispatch_semaphore> **, std::__1::allocator<NSObject<OS_dispatch_semaphore> *>> {
	id __value_;
} compressed_pair<NSObject<OS_dispatch_semaphore> **, std::__1::allocator<NSObject<OS_dispatch_semaphore> *>>;

typedef struct vector<NSObject<OS_dispatch_semaphore> *, std::__1::allocator<NSObject<OS_dispatch_semaphore> *>> {
	id __begin_;
	id __end_;
	compressed_pair<NSObject<OS_dispatch_semaphore> **, std::__1::allocator<NSObject<OS_dispatch_semaphore> *>> __end_cap_;
} vector<NSObject<OS_dispatch_semaphore> *, std::__1::allocator<NSObject<OS_dispatch_semaphore> *>>;

typedef struct _compressed_pair<PropertyListener *, std::__1::allocator<PropertyListener>> {
	PropertyListener __value_;
} compressed_pair<PropertyListener *, std::__1::allocator<PropertyListener>>;

typedef struct vector<PropertyListener, std::__1::allocator<PropertyListener>> {
	PropertyListener __begin_;
	PropertyListener __end_;
	compressed_pair<PropertyListener *, std::__1::allocator<PropertyListener>> __end_cap_;
} vector<PropertyListener, std::__1::allocator<PropertyListener>>;

typedef struct _compressed_pair<NewServerListener *, std::__1::allocator<NewServerListener>> {
	NewServerListener __value_;
} compressed_pair<NewServerListener *, std::__1::allocator<NewServerListener>>;

typedef struct vector<NewServerListener, std::__1::allocator<NewServerListener>> {
	NewServerListener __begin_;
	NewServerListener __end_;
	compressed_pair<NewServerListener *, std::__1::allocator<NewServerListener>> __end_cap_;
} vector<NewServerListener, std::__1::allocator<NewServerListener>>;

typedef struct AUListenerBase* AUListenerBaseRef;

typedef struct _cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int>> {
	AI __a_value;
} cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int>>;

typedef struct atomic<unsigned int> {
	cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int>> __a_;
} atomic<unsigned int>;

typedef struct _compressed_pair<AUAudioUnitV2Bridge_Renderer *, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>> {
	AUAudioUnitV2Bridge_Renderer __value_;
} compressed_pair<AUAudioUnitV2Bridge_Renderer *, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>>;

typedef struct unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>> {
	compressed_pair<AUAudioUnitV2Bridge_Renderer *, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>> __ptr_;
} unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true>>;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true>> {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true>>;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>>> {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>>>;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>> {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>> __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>>;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>> {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>> __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>>;

typedef struct _hash_table<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>> __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>>> __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true>> __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true>> __p3_;
} hash_table<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>>>;

typedef struct unordered_map<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> {
	hash_table<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> __table_;
} unordered_map<long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void ()(unsigned int, const AudioTimeStamp *, unsigned int, long)>>>;

typedef struct _long {
	unsigned long long __cap_;
	unsigned long long __size_;
	char* __data_;
} long;

typedef struct _short {
	/*function pointer*/void* ;
	unsigned char __size_;
	c) __lx;
	char __data_[23];
} short;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
	const ep __value_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>>;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

typedef struct __FSEventStream* FSEventStreamRef;

typedef struct _value_func<void (AudioComponentVector &, AudioComponentVector &)> {
	type __buf_;
	__base<void (AudioComponentVector &, AudioComponentVector &)> __f_;
} value_func<void (AudioComponentVector &, AudioComponentVector &)>;

typedef struct function<void (AudioComponentVector &, AudioComponentVector &)> {
	value_func<void (AudioComponentVector &, AudioComponentVector &)> __f_;
} function<void (AudioComponentVector &, AudioComponentVector &)>;

typedef struct ConnectionInfo {
	NSXPCConnection* mConnection;
	int mExtUsePermission;
	BOOL mLinkedSDKRequiresEntitlement;
} ConnectionInfo;

