/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCIPCProcess.h>

@class NSString, NSArray, NSMutableSet;

@interface _GCIPCRemoteProcess : NSObject <_GCIPCProcess> {

	int _auditSessionIdentifier;
	int _processIdentifier;
	unsigned _effectiveUserIdentifier;
	unsigned _effectiveGroupIdentifier;
	NSString* _bundleIdentifier;
	NSArray* _connections;
	NSMutableSet* _connectionInvalidationRegistrations;
	SCD_Struct_GC21 _auditToken;

}

@property (copy) NSArray * connections;                                                       //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSMutableSet * connectionInvalidationRegistrations;              //@synthesize connectionInvalidationRegistrations=_connectionInvalidationRegistrations - In the implementation block
@property (readonly) SCD_Struct_GC21 auditToken;                                              //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) int auditSessionIdentifier;                                              //@synthesize auditSessionIdentifier=_auditSessionIdentifier - In the implementation block
@property (readonly) int processIdentifier;                                                   //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (readonly) unsigned effectiveUserIdentifier;                                        //@synthesize effectiveUserIdentifier=_effectiveUserIdentifier - In the implementation block
@property (readonly) unsigned effectiveGroupIdentifier;                                       //@synthesize effectiveGroupIdentifier=_effectiveGroupIdentifier - In the implementation block
@property (readonly) NSString * bundleIdentifier;                                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)init;
-(id)redactedDescription;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(int)processIdentifier;
-(SCD_Struct_GC21)auditToken;
-(unsigned)effectiveUserIdentifier;
-(int)auditSessionIdentifier;
-(unsigned)effectiveGroupIdentifier;
-(NSArray *)connections;
-(void)setConnections:(NSArray *)arg1 ;
-(void)addConnection:(id)arg1 ;
-(NSMutableSet *)connectionInvalidationRegistrations;
-(char)isEqualToProcess:(id)arg1 ;
-(void)setConnectionInvalidationRegistrations:(NSMutableSet *)arg1 ;
@end

