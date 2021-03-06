/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPObjectDelegate, TSPLazyReferenceDelegate, TSPUnarchiverDelegate;
#import <TSPersistence/TSPersistence-Structs.h>
@class TSPUnknownContent, _TtC13TSPersistence23TSPMutableIdentifierSet, NSUUID, TSPObjectContext;

@interface TSPUnarchiver : NSObject {

	A# _objectClass;
	unique_ptr<google::protobuf::Message, std::__1::default_delete<google::protobuf::Message>>* _message;
	long long _objectIdentifier;
	unique_ptr<TSP::IdentifierMap<bool>, std::__1::default_delete<TSP::IdentifierMap<bool>>>* _strongReferences;
	unsigned long long _messageVersion;
	TSPUnknownContent* _unknownContent;
	id<TSPObjectDelegate> _objectDelegate;
	id<TSPLazyReferenceDelegate> _lazyReferenceDelegate;
	id<TSPUnarchiverDelegate> _delegate;
	vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference>>* _references;
	vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference>>* _repeatedReferences;
	vector<void ()(), std::__1::allocator<void ()()>>* _finalizeHandlers;
	FieldPath* _currentFieldPath;
	char _hasAlternateMessages;
	unsigned _messageType;
	Class _unarchiveClass;
	_TtC13TSPersistence23TSPMutableIdentifierSet* _dataReferences;

}

@property (nonatomic,readonly) char hasPreUFFVersion; 
@property (nonatomic,readonly) unsigned long long preUFFVersion; 
@property (nonatomic,readonly) char isFromCopy; 
@property (nonatomic,readonly) char isCrossDocumentPaste; 
@property (nonatomic,readonly) char isCrossAppPaste; 
@property (nonatomic,readonly) Class unarchiveClass;                                                       //@synthesize unarchiveClass=_unarchiveClass - In the implementation block
@property (nonatomic,readonly) long long objectIdentifier;                                                 //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * objectUUID; 
@property (nonatomic,readonly) TSPUnknownContent * unknownContent;                                         //@synthesize unknownContent=_unknownContent - In the implementation block
@property (nonatomic,readonly) char hasAlternateMessages;                                                  //@synthesize hasAlternateMessages=_hasAlternateMessages - In the implementation block
@property (nonatomic,__weak,readonly) id<TSPObjectDelegate> objectDelegate;                                //@synthesize objectDelegate=_objectDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<TSPUnarchiverDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _TtC13TSPersistence23TSPMutableIdentifierSet * dataReferences;              //@synthesize dataReferences=_dataReferences - In the implementation block
@property (nonatomic,readonly) char canValidateReferences; 
@property (nonatomic,readonly) char hasDocumentVersionUUID; 
@property (nonatomic,__weak,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) unsigned messageType;                                                       //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,readonly) Class objectClass; 
@property (nonatomic,readonly) unsigned long long messageVersion;                                          //@synthesize messageVersion=_messageVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) char documentHasCurrentFileFormatVersion; 
@property (nonatomic,readonly) unsigned long long readVersion; 
@property (nonatomic,readonly) long long sourceType; 
-(void)dealloc;
-(id<TSPUnarchiverDelegate>)delegate;
-(const Message*)message;
-(TSPObjectContext *)context;
-(Class)objectClass;
-(unsigned)messageType;
-(long long)objectIdentifier;
-(long long)sourceType;
-(vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference>>*)references;
-(NSUUID *)objectUUID;
-(char)documentHasCurrentFileFormatVersion;
-(char)hasPreUFFVersion;
-(unsigned long long)messageVersion;
-(void)readReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedWeakReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readWeakReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)fileFormatVersion;
-(unsigned long long)preUFFVersion;
-(void)addFinalizeHandler:(/*^block*/id)arg1 ;
-(const Message*)messageWithDescriptor:(const Descriptor*)arg1 ;
-(void)pushScopeForField:(int)arg1 message:(const Message*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)readWeakObjectUUIDReferenceMessage:(const UUID*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readRepeatedWeakObjectUUIDReferenceMessage:(const RepeatedPtrField<TSP::UUID>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readLazyReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readDataReferenceMessage:(const DataReference*)arg1 ;
-(void)readWeakLazyReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(char)hasDocumentVersionUUID;
-(id)readWeakObjectUUIDPathReferenceMessage:(const UUIDPath*)arg1 completion:(/*^block*/id)arg2 ;
-(char)isCrossAppPaste;
-(void)readSparseReferenceArrayMessage:(const SparseReferenceArray*)arg1 completion:(/*^block*/id)arg2 ;
-(char)isFromCopy;
-(TSPUnknownContent *)unknownContent;
-(id<TSPObjectDelegate>)objectDelegate;
-(IdentifierMap<bool>*)strongReferences;
-(_TtC13TSPersistence23TSPMutableIdentifierSet *)dataReferences;
-(const Message*)p_messageWithDescriptor:(const Descriptor*)arg1 ;
-(void)readReferenceMessage:(const Reference*)arg1 isWeak:(char)arg2 validateStrongReferences:(char)arg3 allowUnknownObject:(char)arg4 selector:(SEL)arg5 weakSelector:(SEL)arg6 completion:(/*^block*/id)arg7 ;
-(void)validateReferenceToObjectIdentifier:(long long)arg1 isWeak:(char*)arg2 validateStrongReferences:(char)arg3 selector:(SEL)arg4 weakSelector:(SEL)arg5 ;
-(void)readRepeatedReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 isWeak:(char)arg2 validateStrongReferences:(char)arg3 allowUnknownObject:(char)arg4 selector:(SEL)arg5 completion:(/*^block*/id)arg6 ;
-(void)readLazyReferenceMessage:(const Reference*)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(char)arg3 allowUnknownObject:(char)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)readWeakLazyReferenceMessage:(const Reference*)arg1 retainObjectUntilArchived:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(char)arg3 allowUnknownObject:(char)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)readRepeatedWeakLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 retainObjectUntilArchived:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)readRepeatedWeakLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)readVersion;
-(void)readWeakReferenceToObjectUUID:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)canValidateReferences;
-(void)readUnownedReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedUnownedReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readRepeatedWeakObjectUUIDPathReferenceMessage:(const RepeatedPtrField<TSP::UUIDPath>*)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMessageType:(unsigned)arg1 unarchiveClass:(Class)arg2 message:(unique_ptr<google::protobuf::Message, std::__1::default_delete<google::protobuf::Message>>*)arg3 identifier:(long long)arg4 strongReferences:(unique_ptr<TSP::IdentifierMap<bool>, std::__1::default_delete<TSP::IdentifierMap<bool>>>*)arg5 messageVersion:(unsigned long long)arg6 unknownContent:(id)arg7 hasAlternateMessages:(char)arg8 objectDelegate:(id)arg9 lazyReferenceDelegate:(id)arg10 delegate:(id)arg11 ;
-(vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference>>*)repeatedReferences;
-(vector<void ()(), std::__1::allocator<void ()()>>*)finalizeHandlers;
-(void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(char)arg3 allowUnknownObject:(char)arg4 selector:(SEL)arg5 completion:(/*^block*/id)arg6 ;
-(Class)unarchiveClass;
-(char)hasAlternateMessages;
-(void)readReferenceMessage1:(const Reference*)arg1 message2:(const Reference*)arg2 completion:(/*^block*/id)arg3 ;
-(void)readWeakReferenceMessage1:(const Reference*)arg1 message2:(const Reference*)arg2 completion:(/*^block*/id)arg3 ;
-(void)readReferenceMessage:(const Reference*)arg1 repeatedMessage:(const RepeatedPtrField<TSP::Reference>*)arg2 completion:(/*^block*/id)arg3 ;
-(void)readWeakReferenceMessage:(const Reference*)arg1 repeatedMessage:(const RepeatedPtrField<TSP::Reference>*)arg2 completion:(/*^block*/id)arg3 ;
-(char)isCrossDocumentPaste;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long>>Ref)filterIdentifiers:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long>>Ref)arg1 ;
-(void)readSparseReferenceArrayMessage:(const SparseReferenceArray*)arg1 isWeak:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)readSparseWeakReferenceArrayMessage:(const SparseReferenceArray*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readSparseWeakObjectUUIDReferenceArrayMessage:(const SparseUUIDArray*)arg1 ;
-(id)readSparseWeakObjectUUIDPathReferenceArrayMessage:(const SparseUUIDPathArray*)arg1 ;
@end

