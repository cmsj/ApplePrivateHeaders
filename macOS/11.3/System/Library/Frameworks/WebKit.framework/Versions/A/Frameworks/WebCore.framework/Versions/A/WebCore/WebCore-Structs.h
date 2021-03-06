/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebGLLayer, NSObject<OS_dispatch_queue>;

typedef struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> {
	WeakPtrImpl<WTF::EmptyCounter> m_ptr;
} RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>>;

typedef struct WeakPtr<WebCore::AVOutputDeviceMenuControllerTargetPicker, WTF::EmptyCounter> {
	RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> m_impl;
} WeakPtr<WebCore::AVOutputDeviceMenuControllerTargetPicker, WTF::EmptyCounter>;

typedef struct WeakPtr<WebCore::AVRoutePickerViewTargetPicker, WTF::EmptyCounter> {
	RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> m_impl;
} WeakPtr<WebCore::AVRoutePickerViewTargetPicker, WTF::EmptyCounter>;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct RetainPtr<NSData> {
	void m_ptr;
} RetainPtr<NSData>;

typedef struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
	RetainPtr<AVAssetResourceLoadingRequest> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct _cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char>> {
	AC __a_value;
} cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char>>;

typedef struct atomic<unsigned char> {
	cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char>> __a_;
} atomic<unsigned char>;

typedef struct Atomic<unsigned char> {
	atomic<unsigned char> value;
} Atomic<unsigned char>;

typedef struct Lock {
	Atomic<unsigned char> m_byte;
} Lock;

typedef struct WeakPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::EmptyCounter> {
	RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> m_impl;
} WeakPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::EmptyCounter>;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_We11;

typedef struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> {
	RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> m_impl;
} WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter>;

typedef struct _compressed_pair<WebCore::TaskDispatcher<WebCore::Timer> *, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer>>> {
	TaskDispatcher<WebCore::Timer> __value_;
} compressed_pair<WebCore::TaskDispatcher<WebCore::Timer> *, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer>>>;

typedef struct unique_ptr<WebCore::TaskDispatcher<WebCore::Timer>, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer>>> {
	compressed_pair<WebCore::TaskDispatcher<WebCore::Timer> *, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer>>> __ptr_;
} unique_ptr<WebCore::TaskDispatcher<WebCore::Timer>, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer>>>;

typedef struct UniqueRef<WebCore::TaskDispatcher<WebCore::Timer>> {
	unique_ptr<WebCore::TaskDispatcher<WebCore::Timer>, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer>>> m_ref;
} UniqueRef<WebCore::TaskDispatcher<WebCore::Timer>>;

typedef struct WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer>, WTF::EmptyCounter> {
	RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> m_impl;
} WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer>, WTF::EmptyCounter>;

typedef struct GenericTaskQueue<WebCore::Timer> {
	WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer>, WTF::EmptyCounter> m_weakPtrFactory;
	UniqueRef<WebCore::TaskDispatcher<WebCore::Timer>> m_dispatcher;
	unsigned m_pendingTasks;
	BOOL m_isClosed;
} GenericTaskQueue<WebCore::Timer>;

typedef struct _cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>> {
	AB __a_value;
} cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
	cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct Atomic<bool> {
	atomic<bool> value;
} Atomic<bool>;

typedef struct Condition {
	Atomic<bool> m_hasWaiters;
} Condition;

typedef struct BinarySemaphore {
	BOOL m_isSet;
	Lock m_lock;
	Condition m_condition;
} BinarySemaphore;

typedef struct _compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void>>> {
	CallableWrapperBase<void> __value_;
} compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void>>>;

typedef struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void>>> {
	compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void>>> __ptr_;
} unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void>>>;

typedef struct Function<void ()> {
	unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void>>> m_callableWrapper;
} Function<void ()>;

typedef struct RetainPtr<CALayer> {
	void m_ptr;
} RetainPtr<CALayer>;

typedef struct NakedPtr<WebCore::ScrollAnimatorMac> {
	ScrollAnimatorMac m_ptr;
} NakedPtr<WebCore::ScrollAnimatorMac>;

typedef struct RetainPtr<NSScrollerImp> {
	void m_ptr;
} RetainPtr<NSScrollerImp>;

typedef struct RetainPtr<NSTimer> {
	void m_ptr;
} RetainPtr<NSTimer>;

typedef struct RetainPtr<NSDate> {
	void m_ptr;
} RetainPtr<NSDate>;

typedef struct RefPtr<WebCore::CubicBezierTimingFunction, WTF::RawPtrTraits<WebCore::CubicBezierTimingFunction>, WTF::DefaultRefDerefTraits<WebCore::CubicBezierTimingFunction>> {
	CubicBezierTimingFunction m_ptr;
} RefPtr<WebCore::CubicBezierTimingFunction, WTF::RawPtrTraits<WebCore::CubicBezierTimingFunction>, WTF::DefaultRefDerefTraits<WebCore::CubicBezierTimingFunction>>;

typedef struct RetainPtr<WebScrollbarPartAnimation> {
	void m_ptr;
} RetainPtr<WebScrollbarPartAnimation>;

typedef struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter> {
	RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> m_impl;
} WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter>;

typedef struct Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
	RetainPtr<AVSampleBufferDisplayLayer> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
	RetainPtr<AVSampleBufferAudioRenderer> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType> {
	unsigned long long m_identifier;
} ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType>;

typedef struct BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> {
	/*^block*/id m_block;
} BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)>;

typedef struct RetainPtr<SFSpeechRecognizer> {
	void m_ptr;
} RetainPtr<SFSpeechRecognizer>;

typedef struct RetainPtr<SFSpeechAudioBufferRecognitionRequest> {
	void m_ptr;
} RetainPtr<SFSpeechAudioBufferRecognitionRequest>;

typedef struct WeakObjCPtr<SFSpeechRecognitionTask> {
	id m_weakReference;
} WeakObjCPtr<SFSpeechRecognitionTask>;

typedef struct RetainPtr<WebSpeechRecognizerTaskImpl> {
	void m_ptr;
} RetainPtr<WebSpeechRecognizerTaskImpl>;

typedef struct RetainPtr<NSAttributedString> {
	void m_ptr;
} RetainPtr<NSAttributedString>;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> {
	ArchiveResource m_ptr;
} RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>>;

typedef struct CGContext* CGContextRef;

typedef struct RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> {
	TextIndicator m_ptr;
} RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>>;

typedef struct RetainPtr<NSArray> {
	void m_ptr;
} RetainPtr<NSArray>;

typedef struct RefPtr<const WebCore::SharedBuffer::DataSegment, WTF::RawPtrTraits<const WebCore::SharedBuffer::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::SharedBuffer::DataSegment>> {
	DataSegment m_ptr;
} RefPtr<const WebCore::SharedBuffer::DataSegment, WTF::RawPtrTraits<const WebCore::SharedBuffer::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::SharedBuffer::DataSegment>>;

typedef const struct DataSegmentatomic<unsigned int>__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int>>AIVariant<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>, WTF::RetainPtr<const __CFData *>, WTF::FileSystemImpl::MappedFileData>(__variant_data<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>, WTF::RetainPtr<const __CFData *>, WTF::FileSystemImpl::MappedFileData>(__variant_data<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>>__storage_wrapper<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>>type[16C]__dummy_type)(__variant_data<WTF::RetainPtr<const __CFData *>, WTF::FileSystemImpl::MappedFileData>(__variant_data<WTF::RetainPtr<const __CFData *>>__storage_wrapper<WTF::RetainPtr<const __CFData *>>type[8C]__dummy_type)(__variant_data<WTF::FileSystemImpl::MappedFileData>__storage_wrapper<WTF::FileSystemImpl::MappedFileData>type[16C]__dummy_type)))c* ataSegmentRef;

typedef struct CGColor* CGColorRef;

typedef struct _compressed_pair<WebCore::TileController *, std::__1::default_delete<WebCore::TileController>> {
	TileController __value_;
} compressed_pair<WebCore::TileController *, std::__1::default_delete<WebCore::TileController>>;

typedef struct unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController>> {
	compressed_pair<WebCore::TileController *, std::__1::default_delete<WebCore::TileController>> __ptr_;
} unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController>>;

typedef struct RetainPtr<AVPlayerLayer> {
	void m_ptr;
} RetainPtr<AVPlayerLayer>;

typedef struct _compressed_pair<WebCore::IOSurface *, std::__1::default_delete<WebCore::IOSurface>> {
	IOSurface __value_;
} compressed_pair<WebCore::IOSurface *, std::__1::default_delete<WebCore::IOSurface>>;

typedef struct unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface>> {
	compressed_pair<WebCore::IOSurface *, std::__1::default_delete<WebCore::IOSurface>> __ptr_;
} unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface>>;

typedef struct Buffer {
	unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface>> surface;
	void handle;
} Buffer;

typedef struct WebGLLayerSwapChain {
	/*function pointer*/void* _vptr$GraphicsContextGLIOSurfaceSwapChain;
	Buffer m_displayBuffer;
	Buffer m_spareBuffer;
	WebGLLayer* m_layer;
} WebGLLayerSwapChain;

typedef struct Optional<WebGLLayerSwapChain> {
	BOOL init_;
	storage_t<WebGLLayerSwapChain> storage_;
	unsigned char dummy_;
	WebGLLayerSwapChain) value_;
} Optional<WebGLLayerSwapChain>;

typedef struct CGImage* CGImageRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct RetainPtr<NSSpeechSynthesizer> {
	void m_ptr;
} RetainPtr<NSSpeechSynthesizer>;

typedef struct RetainPtr<PIPViewController> {
	void m_ptr;
} RetainPtr<PIPViewController>;

typedef struct RetainPtr<NSViewController> {
	void m_ptr;
} RetainPtr<NSViewController>;

typedef struct RetainPtr<WebVideoViewContainer> {
	void m_ptr;
} RetainPtr<WebVideoViewContainer>;

typedef struct RetainPtr<NSWindow> {
	void m_ptr;
} RetainPtr<NSWindow>;

typedef struct RetainPtr<NSVisualEffectView> {
	void m_ptr;
} RetainPtr<NSVisualEffectView>;

typedef struct RetainPtr<NSTextField> {
	void m_ptr;
} RetainPtr<NSTextField>;

typedef struct WeakObjCPtr<NSResponder> {
	id m_weakReference;
} WeakObjCPtr<NSResponder>;

typedef struct RetainPtr<AVValueTiming> {
	void m_ptr;
} RetainPtr<AVValueTiming>;

typedef struct RetainPtr<NSArray<AVTouchBarMediaSelectionOption *>> {
	void m_ptr;
} RetainPtr<NSArray<AVTouchBarMediaSelectionOption *>>;

typedef struct RetainPtr<AVTouchBarMediaSelectionOption> {
	void m_ptr;
} RetainPtr<AVTouchBarMediaSelectionOption>;

typedef struct RefPtr<WebCore::PlaybackSessionInterfaceMac, WTF::RawPtrTraits<WebCore::PlaybackSessionInterfaceMac>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionInterfaceMac>> {
	PlaybackSessionInterfaceMac m_ptr;
} RefPtr<WebCore::PlaybackSessionInterfaceMac, WTF::RawPtrTraits<WebCore::PlaybackSessionInterfaceMac>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionInterfaceMac>>;

typedef struct WeakPtr<WebCore::MediaRecorderPrivateWriter, WTF::EmptyCounter> {
	RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::RawPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<WTF::EmptyCounter>>> m_impl;
} WeakPtr<WebCore::MediaRecorderPrivateWriter, WTF::EmptyCounter>;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct RetainPtr<NSView> {
	void m_ptr;
} RetainPtr<NSView>;

typedef struct RetainPtr<NSString> {
	void m_ptr;
} RetainPtr<NSString>;

typedef struct CGPath* CGPathRef;

typedef const struct PathRetainPtr<CGPath *>vVariant<WTF::Monostate, WebCore::MoveData, WebCore::LineData, WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData>(__variant_data<WTF::Monostate, WebCore::MoveData, WebCore::LineData, WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData>(__variant_data<WTF::Monostate>Monostate__dummy_type)(__variant_data<WebCore::MoveData, WebCore::LineData, WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData>(__variant_data<WebCore::MoveData>__storage_wrapper<WebCore::MoveData>type[8C]__dummy_type)(__variant_data<WebCore::LineData, WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData>(__variant_data<WebCore::LineData>__storage_wrapper<WebCore::LineData>type[16C]__dummy_type)(__variant_data<WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData>(__variant_data<WebCore::ArcData>__storage_wrapper<WebCore::ArcData>type[32C]__dummy_type)(__variant_data<WebCore::QuadCurveData, WebCore::BezierCurveData>(__variant_data<WebCore::QuadCurveData>__storage_wrapper<WebCore::QuadCurveData>type[24C]__dummy_type)(__variant_data<WebCore::BezierCurveData>__storage_wrapper<WebCore::BezierCurveData>type[32C]__dummy_type))))))cB* athRef;

typedef struct __AXTextMarkerRange* AXTextMarkerRangeRef;

typedef struct __AXTextMarker* AXTextMarkerRef;

typedef struct Seconds {
	double m_value;
} Seconds;

typedef struct Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0, WTF::FastMalloc> {
	UncommonHeader m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0, WTF::FastMalloc>;

typedef struct Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6, WTF::FastMalloc> {
	CommonHeader m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6, WTF::FastMalloc>;

typedef struct HTTPHeaderMap {
	Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6, WTF::FastMalloc> m_commonHeaders;
	Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0, WTF::FastMalloc> m_uncommonHeaders;
} HTTPHeaderMap;

typedef struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> {
	StringImpl m_ptr;
} RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>>;

typedef struct String {
	RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> m_impl;
} String;

typedef struct NetworkLoadMetrics {
	Seconds fetchStart;
	Seconds domainLookupStart;
	Seconds domainLookupEnd;
	Seconds connectStart;
	Seconds secureConnectionStart;
	Seconds connectEnd;
	Seconds requestStart;
	Seconds responseStart;
	Seconds responseEnd;
	String protocol;
	BOOL complete;
	BOOL cellular;
	BOOL expensive;
	BOOL constrained;
	BOOL multipath;
	BOOL isReusedConnection;
	String remoteAddress;
	String connectionIdentifier;
	String tlsProtocol;
	String tlsCipher;
	unsigned char priority;
	HTTPHeaderMap requestHeaders;
	unsigned long long requestHeaderBytesSent;
	unsigned long long responseHeaderBytesReceived;
	unsigned long long requestBodyBytesSent;
	unsigned long long responseBodyBytesReceived;
	unsigned long long responseBodyDecodedSize;
} NetworkLoadMetrics;

typedef struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> {
	void m_ptr;
} RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics>;

typedef struct RefPtr<WebCore::PlatformMediaResourceLoader, WTF::RawPtrTraits<WebCore::PlatformMediaResourceLoader>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResourceLoader>> {
	PlatformMediaResourceLoader m_ptr;
} RefPtr<WebCore::PlatformMediaResourceLoader, WTF::RawPtrTraits<WebCore::PlatformMediaResourceLoader>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResourceLoader>>;

typedef struct WeakObjCPtr<id<NSURLSessionDelegate>> {
	id m_weakReference;
} WeakObjCPtr<id<NSURLSessionDelegate>>;

typedef struct RetainPtr<NSOperationQueue> {
	void m_ptr;
} RetainPtr<NSOperationQueue>;

typedef struct HashTable<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>> {
	RetainPtr<WebCoreNSURLSessionDataTask> m_table;
} HashTable<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>>;

typedef struct HashSet<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>> {
	HashTable<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>> m_impl;
} HashSet<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>>;

typedef struct HashTable<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>, WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>> {
	RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>> m_table;
} HashTable<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>, WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>>;

typedef struct HashSet<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>> {
	HashTable<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>, WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>> m_impl;
} HashSet<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::RawPtrTraits<WebCore::SecurityOrigin>, WTF::DefaultRefDerefTraits<WebCore::SecurityOrigin>>>>;

typedef struct OSObjectPtr<NSObject<OS_dispatch_queue> *> {
	NSObject<OS_dispatch_queue>* m_ptr;
} OSObjectPtr<NSObject<OS_dispatch_queue> *>;

typedef struct _NSZone* NSZoneRef;

typedef struct RefPtr<WebCore::PlatformMediaResource, WTF::RawPtrTraits<WebCore::PlatformMediaResource>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResource>> {
	PlatformMediaResource m_ptr;
} RefPtr<WebCore::PlatformMediaResource, WTF::RawPtrTraits<WebCore::PlatformMediaResource>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResource>>;

typedef struct RetainPtr<NSURLResponse> {
	void m_ptr;
} RetainPtr<NSURLResponse>;

typedef struct RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::RawPtrTraits<WebCore::SynchronousLoaderMessageQueue>, WTF::DefaultRefDerefTraits<WebCore::SynchronousLoaderMessageQueue>> {
	SynchronousLoaderMessageQueue m_ptr;
} RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::RawPtrTraits<WebCore::SynchronousLoaderMessageQueue>, WTF::DefaultRefDerefTraits<WebCore::SynchronousLoaderMessageQueue>>;

typedef struct RetainPtr<NSURLRequest> {
	void m_ptr;
} RetainPtr<NSURLRequest>;

typedef struct RetainPtr<NSCachedURLResponse> {
	void m_ptr;
} RetainPtr<NSCachedURLResponse>;

typedef struct HashTable<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>, WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>>, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>>> {
	RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>> m_table;
} HashTable<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>, WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>>, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>>>;

typedef struct HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>>> {
	HashTable<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>, WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>>, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>>> m_impl;
} HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>>>;

typedef struct Optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>>>> {
	BOOL init_;
	storage_t<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>>>> storage_;
	unsigned char dummy_;
	HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>>>) value_;
} Optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::RawPtrTraits<WTF::SchedulePair>, WTF::DefaultRefDerefTraits<WTF::SchedulePair>>>>>;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct OpaqueJSContext* OpaqueJSContextRef;

typedef struct _CGLContextObject* CGLContextObjectRef;

typedef struct _CGLPixelFormatObject* CGLPixelFormatObjectRef;

typedef struct {
	unsigned field1;
	int field2;
	long long field3;
	unsigned long long field4;
	double field5;
	long long field6;
	CVSMPTETime field7;
	unsigned long long field8;
	unsigned long long field9;
} SCD_Struct_We112;

