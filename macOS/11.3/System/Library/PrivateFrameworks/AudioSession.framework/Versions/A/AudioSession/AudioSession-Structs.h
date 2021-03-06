/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/Versions/A/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct weak_ptr<as::client::IOController> {
	IOController __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<as::client::IOController>;

typedef struct shared_ptr<as::client::KVOMutex> {
	KVOMutex __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<as::client::KVOMutex>;

typedef struct shared_ptr_mutex<as::client::KVOMutex> {
	shared_ptr<as::client::KVOMutex> mMutex;
} shared_ptr_mutex<as::client::KVOMutex>;

typedef struct synchronized<std::__1::weak_ptr<as::client::IOController>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::weak_ptr<as::client::IOController>>> {
	shared_ptr_mutex<as::client::KVOMutex> mMutex;
	weak_ptr<as::client::IOController> mObject;
} synchronized<std::__1::weak_ptr<as::client::IOController>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::weak_ptr<as::client::IOController>>>;

typedef struct xstring {
	string_storage mStorage;
	__CFString mCFString;
} xstring;

typedef struct SelectorControlItem {
	/*function pointer*/void* _vptr$Base;
	unsigned _has_bits[1];
	xstring _name;
	unsigned _ID;
	unsigned _kind;
} SelectorControlItem;

typedef struct _NSZone* NSZoneRef;

typedef struct shared_ptr<as::client::VirtualPort> {
	VirtualPort __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<as::client::VirtualPort>;

typedef struct synchronized<std::__1::shared_ptr<as::client::VirtualPort>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::shared_ptr<as::client::VirtualPort>>> {
	shared_ptr_mutex<as::client::KVOMutex> mMutex;
	shared_ptr<as::client::VirtualPort> mObject;
} synchronized<std::__1::shared_ptr<as::client::VirtualPort>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::shared_ptr<as::client::VirtualPort>>>;

typedef struct shared_ptr<as::client::SessionManager> {
	SessionManager __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<as::client::SessionManager>;

typedef struct synchronized<std::__1::shared_ptr<as::client::SessionManager>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::shared_ptr<as::client::SessionManager>>> {
	shared_ptr_mutex<as::client::KVOMutex> mMutex;
	shared_ptr<as::client::SessionManager> mObject;
} synchronized<std::__1::shared_ptr<as::client::SessionManager>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::shared_ptr<as::client::SessionManager>>>;

typedef struct shared_ptr<as::client::HardwareObjectBase> {
	HardwareObjectBase __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<as::client::HardwareObjectBase>;

typedef struct synchronized<std::__1::shared_ptr<as::client::HardwareObjectBase>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::shared_ptr<as::client::HardwareObjectBase>>> {
	shared_ptr_mutex<as::client::KVOMutex> mMutex;
	shared_ptr<as::client::HardwareObjectBase> mObject;
} synchronized<std::__1::shared_ptr<as::client::HardwareObjectBase>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::shared_ptr<as::client::HardwareObjectBase>>>;

typedef struct shared_ptr<as::client::IOClient> {
	IOClient __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<as::client::IOClient>;

typedef struct shared_ptr<as::client::Session> {
	Session __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<as::client::Session>;

typedef struct synchronized<std::__1::shared_ptr<as::client::Session>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::shared_ptr<as::client::Session>>> {
	shared_ptr_mutex<as::client::KVOMutex> mMutex;
	shared_ptr<as::client::Session> mObject;
} synchronized<std::__1::shared_ptr<as::client::Session>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::shared_ptr<as::client::Session>>>;

typedef struct shared_ptr<as::client::IOStream> {
	IOStream __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<as::client::IOStream>;

typedef struct synchronized<std::__1::shared_ptr<as::client::IOStream>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::shared_ptr<as::client::IOStream>>> {
	shared_ptr_mutex<as::client::KVOMutex> mMutex;
	shared_ptr<as::client::IOStream> mObject;
} synchronized<std::__1::shared_ptr<as::client::IOStream>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::shared_ptr<as::client::IOStream>>>;

