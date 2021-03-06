/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEProfilePayloadBaseDelegate.h>

@class NSDictionary, NSMutableDictionary;

@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate> {

	NSDictionary* _payloadAtom;
	NSMutableDictionary* _pendingCertificates;
	NSDictionary* _pluginUpgradeInfo;

}

@property (nonatomic,retain) NSDictionary * payloadAtom;                   //@synthesize payloadAtom=_payloadAtom - In the implementation block
@property (retain) NSMutableDictionary * pendingCertificates;              //@synthesize pendingCertificates=_pendingCertificates - In the implementation block
@property (retain) NSDictionary * pluginUpgradeInfo;                       //@synthesize pluginUpgradeInfo=_pluginUpgradeInfo - In the implementation block
-(NSDictionary *)payloadAtom;
-(NSDictionary *)pluginUpgradeInfo;
-(char)addCertificatePending:(id)arg1 certificateTag:(id)arg2 accessGroup:(id)arg3 ;
-(char)addCertificatePending:(id)arg1 certificateTag:(id)arg2 ;
-(NSMutableDictionary *)pendingCertificates;
-(void)setPluginUpgradeInfo:(NSDictionary *)arg1 ;
-(id)validatePayload;
-(void)setPayloadAtom:(NSDictionary *)arg1 ;
-(void)setPendingCertificates:(NSMutableDictionary *)arg1 ;
-(id)getPreprocessedPayloadContents;
-(char)setPostprocessedPayloadContents:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPayload:(id)arg1 ;
@end

