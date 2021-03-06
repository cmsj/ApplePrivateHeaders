/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/Versions/A/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APXPCActionRequesterProtocol.h>

@class NSUUID, Protocol, APXPCRemoteConnection, NSString;

@interface APXPCActionRequester : NSObject <APXPCActionRequesterProtocol> {

	Protocol* _exportedInterface;
	id _exportedObject;
	id _remoteObjectProxy;
	APXPCRemoteConnection* _connection;
	NSUUID* _delegateID;

}

@property (nonatomic,retain) id remoteObjectProxy;                            //@synthesize remoteObjectProxy=_remoteObjectProxy - In the implementation block
@property (nonatomic,retain) APXPCRemoteConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSUUID * delegateID;                             //@synthesize delegateID=_delegateID - In the implementation block
@property (nonatomic,readonly) Protocol * exportedInterface;                  //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,readonly) id exportedObject;                             //@synthesize exportedObject=_exportedObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)machService;
+(id)unfairLock;
+(char)canShareConnection;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(APXPCRemoteConnection *)connection;
-(id)xpcConnection;
-(void)setConnection:(APXPCRemoteConnection *)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)connectionInterrupted;
-(id)remoteObjectProxy;
-(void)finished;
-(id)exportedObject;
-(Protocol *)exportedInterface;
-(id)remoteObjectInterface;
-(void)connectionInvalidated;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)setDelegateID:(NSUUID *)arg1 ;
-(NSUUID *)delegateID;
-(void)extendCollectionClassesForExportedInterface:(id)arg1 ;
-(void)extendCollectionClassesForRemoteInterface:(id)arg1 ;
@end

