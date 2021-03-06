/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/QuickLookIosmac.framework/Versions/A/QuickLookIosmac
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <QuickLookIosmac/QuickLookIosmac-Structs.h>
@class NSObject, NSMutableDictionary, NSUUID;

@interface QLServerSatelliteManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _satellites;
	NSMutableDictionary* _identifiers;
	NSMutableDictionary* _sandboxVariants;
	NSUUID* _unsandboxedIdentifier;
	NSUUID* _previewsIdentifier;
	NSUUID* _generalIdentifier;
	NSUUID* _personalIdentifier;

}

@property (retain) NSUUID * generalIdentifier;                  //@synthesize generalIdentifier=_generalIdentifier - In the implementation block
@property (retain) NSUUID * personalIdentifier;                 //@synthesize personalIdentifier=_personalIdentifier - In the implementation block
@property (retain) NSUUID * previewsIdentifier;                 //@synthesize previewsIdentifier=_previewsIdentifier - In the implementation block
@property (retain) NSUUID * unsandboxedIdentifier;              //@synthesize unsandboxedIdentifier=_unsandboxedIdentifier - In the implementation block
+(id)defaultManager;
-(void)dealloc;
-(id)init;
-(void)_setupGeneratorsMapping;
-(void)setGeneralIdentifier:(NSUUID *)arg1 ;
-(void)setPersonalIdentifier:(NSUUID *)arg1 ;
-(void)setUnsandboxedIdentifier:(NSUUID *)arg1 ;
-(void)setPreviewsIdentifier:(NSUUID *)arg1 ;
-(id)_identifierForRequest:(QLRequestRef)arg1 generatorIDs:(id*)arg2 customName:(id*)arg3 ;
-(NSUUID *)personalIdentifier;
-(NSUUID *)generalIdentifier;
-(NSUUID *)previewsIdentifier;
-(id)satelliteForRequest:(QLRequestRef)arg1 ;
-(NSUUID *)unsandboxedIdentifier;
@end

