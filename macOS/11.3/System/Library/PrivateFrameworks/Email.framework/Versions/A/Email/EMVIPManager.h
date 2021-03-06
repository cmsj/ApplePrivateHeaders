/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EMVIPReader_Private.h>
#import <libobjc.A.dylib/EMVIPManager.h>
@class NSSet, EAEmailAddressSet;


@protocol EMVIPManager <EMVIPReader,NSObject>
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
@required
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(NSSet *)allVIPs;
-(id)vipWithIdentifier:(id)arg1;
-(void)saveVIPs:(id)arg1;
-(void)removeVIPsWithIdentifiers:(id)arg1;
-(void)removeVIPsWithEmailAddresses:(id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSSet, EAEmailAddressSet, NSMutableDictionary, NSObject, NSString;

@interface EMVIPManager : NSObject <EMVIPReader_Private, EMVIPManager> {

	NSMutableDictionary* _vipsByIdentifier;
	EAEmailAddressSet* _cachedEmailAddresses;
	NSSet* allVIPWaitForResult;
	NSObject*<OS_dispatch_queue> _operationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> operationQueue;                //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allVIPWaitForResult; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
@property (nonatomic,readonly) char hasVIPs; 
+(id)remoteInterface;
+(id)plistURL;
-(id)init;
-(NSObject*<OS_dispatch_queue>)operationQueue;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(id)initWithRemoteConnection:(id)arg1 ;
-(char)isVIPAddress:(id)arg1 ;
-(NSSet *)allVIPs;
-(void)_loadVIPs;
-(id)_allVIPEmailAddresses;
-(id)_vipsDictionary;
-(char)hasVIPs;
-(id)vipWithIdentifier:(id)arg1 ;
-(void)saveVIPs:(id)arg1 ;
-(void)removeVIPsWithIdentifiers:(id)arg1 ;
-(void)removeVIPsWithEmailAddresses:(id)arg1 ;
-(NSSet *)allVIPWaitForResult;
@end

