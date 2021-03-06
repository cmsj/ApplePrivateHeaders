/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMKeyValueCollectionStorage.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol IMKeyValueCollectionStorage, IMKeyValueCollectionDelegate;
@class NSMutableDictionary, NSString;

@interface IMKeyValueCollection : NSObject <IMKeyValueCollectionStorage, NSCopying> {

	long long _batchCount;
	id<IMKeyValueCollectionStorage> _keyValueStorage;
	id<IMKeyValueCollectionDelegate> _delegate;
	NSMutableDictionary* _recordedChanges;

}

@property (readonly) NSMutableDictionary * recordedChanges;                                  //@synthesize recordedChanges=_recordedChanges - In the implementation block
@property (nonatomic,readonly) id<IMKeyValueCollectionStorage> keyValueStorage;              //@synthesize keyValueStorage=_keyValueStorage - In the implementation block
@property (assign,nonatomic,__weak) id<IMKeyValueCollectionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id<IMKeyValueCollectionDelegate>)delegate;
-(void)setDelegate:(id<IMKeyValueCollectionDelegate>)arg1 ;
-(char)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(char)boolForKey:(id)arg1 withDefault:(char)arg2 ;
-(id<IMKeyValueCollectionStorage>)keyValueStorage;
-(id)initWithKeyValueStorage:(id)arg1 ;
-(void)_notifyListeners;
-(void)_recordChange:(id)arg1 forKey:(id)arg2 ;
-(void)_broadcastIfNeeded;
-(id)objectForKey:(id)arg1 withDefault:(id)arg2 ;
-(long long)integerForKey:(id)arg1 withDefault:(long long)arg2 ;
-(long long)int64ForKey:(id)arg1 withDefault:(long long)arg2 ;
-(unsigned long long)uint64ForKey:(id)arg1 withDefault:(unsigned long long)arg2 ;
-(double)doubleForKey:(id)arg1 withDefault:(double)arg2 ;
-(id)stringForKey:(id)arg1 withDefault:(id)arg2 ;
-(void)_startBatchWrite;
-(void)_commitBatchWrite;
-(long long)int64ForKey:(id)arg1 ;
-(void)setInt64:(long long)arg1 forKey:(id)arg2 ;
-(unsigned long long)uint64ForKey:(id)arg1 ;
-(void)setUint64:(long long)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)recordedChanges;
-(void)setError:(id)arg1 forKey:(id)arg2 ;
-(id)errorForKey:(id)arg1 ;
-(void)addErrorToArray:(id)arg1 forKey:(id)arg2 ;
-(id)errorArrayForKey:(id)arg1 ;
@end

