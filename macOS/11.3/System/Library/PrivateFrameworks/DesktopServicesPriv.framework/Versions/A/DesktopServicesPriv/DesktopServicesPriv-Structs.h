/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMetadataQuery, DS_TKeyValueObserverGlue, NSIndexSet, NSObject, NSArray, FPItemCollection, NSError, NSProgress, AMPDevice, NSMutableArray, DeviceCollection, FITNode;

typedef struct TNSRef<NSMetadataQuery, void> {
	NSMetadataQuery* fRef;
} TNSRef<NSMetadataQuery, void>;

typedef struct TNodePtr {
	TNode fCountedNode;
} TNodePtr;

typedef struct TNSRef<DS_TKeyValueObserverGlue, void> {
	DS_TKeyValueObserverGlue* fRef;
} TNSRef<DS_TKeyValueObserverGlue, void>;

typedef struct TNSRef<NSIndexSet, void> {
	NSIndexSet* fRef;
} TNSRef<NSIndexSet, void>;

typedef struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> {
	__CFString fRef;
} TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>>;

typedef struct TString {
	TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> fString;
} TString;

typedef struct TKeyValueObserver {
	TNSRef<DS_TKeyValueObserverGlue, void> fObserver;
	NSObject* fObjectToObserve;
	NSArray* fArrayOfObjectsToObserve;
	TNSRef<NSIndexSet, void> fIndexesOfObjectsToObserve;
	TString fKeyPathToObserve;
} TKeyValueObserver;

typedef struct TNSRef<NSObject, void> {
	NSObject* fRef;
} TNSRef<NSObject, void>;

typedef struct TNSRef<NSArray<FPProviderDomain *>, void> {
	NSArray* fRef;
} TNSRef<NSArray<FPProviderDomain *>, void>;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct shared_ptr<std::__1::mutex> {
	mutex __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::mutex>;

typedef struct condition_variable {
	opaque_pthread_cond_t __cv_;
} condition_variable;

typedef struct condition_variable_any {
	condition_variable __cv_;
	shared_ptr<std::__1::mutex> __mut_;
} condition_variable_any;

typedef struct TConditionVariable {
	condition_variable_any fCondition;
	int fWaitCount;
} TConditionVariable;

typedef struct TNSRef<FPItemCollection, void> {
	FPItemCollection* fRef;
} TNSRef<FPItemCollection, void>;

typedef struct TNSRef<NSError, void> {
	NSError* fRef;
} TNSRef<NSError, void>;

typedef struct TNSRef<NSArray<FPItem *>, void> {
	NSArray* fRef;
} TNSRef<NSArray<FPItem *>, void>;

typedef struct TNSRef<NSProgress, void> {
	NSProgress* fRef;
} TNSRef<NSProgress, void>;

typedef struct TNSRef<AMPDevice, void> {
	AMPDevice* fRef;
} TNSRef<AMPDevice, void>;

typedef struct _compressed_pair<TKeyValueObserver *, std::__1::allocator<TKeyValueObserver>> {
	TKeyValueObserver __value_;
} compressed_pair<TKeyValueObserver *, std::__1::allocator<TKeyValueObserver>>;

typedef struct vector<TKeyValueObserver, std::__1::allocator<TKeyValueObserver>> {
	TKeyValueObserver __begin_;
	TKeyValueObserver __end_;
	compressed_pair<TKeyValueObserver *, std::__1::allocator<TKeyValueObserver>> __end_cap_;
} vector<TKeyValueObserver, std::__1::allocator<TKeyValueObserver>>;

typedef struct TNSRef<NSMutableArray<AMPDevice *>, void> {
	NSMutableArray* fRef;
} TNSRef<NSMutableArray<AMPDevice *>, void>;

typedef struct TNSRef<DeviceCollection, void> {
	DeviceCollection* fRef;
} TNSRef<DeviceCollection, void>;

typedef struct _NSZone* NSZoneRef;

typedef struct OpaqueNodeRef* OpaqueNodeRefRef;

typedef struct TNSRef<FITNode, void> {
	FITNode* fRef;
} TNSRef<FITNode, void>;

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

typedef struct _value_func<void (NSDictionary<NSString *,NSObject *> *)> {
	type __buf_;
	__base<void (NSDictionary<NSString *,NSObject *> *)> __f_;
} value_func<void (NSDictionary<NSString *,NSObject *> *)>;

typedef struct function<void (NSDictionary<NSString *,NSObject *> *)> {
	value_func<void (NSDictionary<NSString *,NSObject *> *)> __f_;
} function<void (NSDictionary<NSString *,NSObject *> *)>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *>>;

typedef struct _compressed_pair<unsigned long, std::__1::hash<NSObject *>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::hash<NSObject *>>;

typedef struct _compressed_pair<float, std::__1::equal_to<NSObject *>> {
	float __value_;
} compressed_pair<float, std::__1::equal_to<NSObject *>>;

typedef struct _hash_node_base<std::__1::__hash_node<NSObject *, void *> *> {
	__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<NSObject *, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *>, std::__1::allocator<std::__1::__hash_node<NSObject *, void *>>> {
	hash_node_base<std::__1::__hash_node<NSObject *, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *>, std::__1::allocator<std::__1::__hash_node<NSObject *, void *>>>;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *>> {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *>> __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *>>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *>>> {
	__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *>> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *>>>;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *>>> {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *>>> __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *>>>;

typedef struct _hash_table<NSObject *, std::__1::hash<NSObject *>, std::__1::equal_to<NSObject *>, std::__1::allocator<NSObject *>> {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *> *>>> __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *, void *> *>, std::__1::allocator<std::__1::__hash_node<NSObject *, void *>>> __p1_;
	compressed_pair<unsigned long, std::__1::hash<NSObject *>> __p2_;
	compressed_pair<float, std::__1::equal_to<NSObject *>> __p3_;
} hash_table<NSObject *, std::__1::hash<NSObject *>, std::__1::equal_to<NSObject *>, std::__1::allocator<NSObject *>>;

typedef struct unordered_set<NSObject *, std::__1::hash<NSObject *>, std::__1::equal_to<NSObject *>, std::__1::allocator<NSObject *>> {
	hash_table<NSObject *, std::__1::hash<NSObject *>, std::__1::equal_to<NSObject *>, std::__1::allocator<NSObject *>> __table_;
} unordered_set<NSObject *, std::__1::hash<NSObject *>, std::__1::equal_to<NSObject *>, std::__1::allocator<NSObject *>>;

typedef struct TDSMutex {
	opaque_pthread_mutex_t fMutex;
} TDSMutex;

