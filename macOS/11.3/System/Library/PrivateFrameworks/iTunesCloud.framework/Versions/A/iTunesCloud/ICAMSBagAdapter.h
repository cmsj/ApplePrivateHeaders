/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, AMSProcessInfo, NSMutableArray, ICURLBag, NSError, ICStoreRequestContext;

@interface ICAMSBagAdapter : NSObject <AMSBagProtocol> {

	os_unfair_lock_s _lock;
	NSMutableArray* _pendingBagValuePromises;
	ICURLBag* _urlBag;
	NSError* _urlBagLoadingError;
	ICStoreRequestContext* _requestContext;

}

@property (nonatomic,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (getter=isExpired,readonly) char expired; 
@property (readonly) NSDate * expirationDate; 
@property (copy,readonly) NSString * profile; 
@property (copy,readonly) NSString * profileVersion; 
@property (copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_valueForBagKey:(id)arg1 valueType:(unsigned long long)arg2 fromURLBag:(id)arg3 urlBagLoadingError:(id)arg4 valueRetrievingError:(id*)arg5 ;
+(id)_valueFromBagDictionary:(id)arg1 forKeyPath:(id)arg2 valueType:(unsigned long long)arg3 ;
+(char)_value:(id)arg1 matchesExpectedType:(unsigned long long)arg2 ;
-(id)boolForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(char)isExpired;
-(NSString *)profile;
-(ICStoreRequestContext *)requestContext;
-(id)initWithRequestContext:(id)arg1 ;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2 ;
-(void)_didFinishLoadingBag:(id)arg1 error:(id)arg2 ;
@end

