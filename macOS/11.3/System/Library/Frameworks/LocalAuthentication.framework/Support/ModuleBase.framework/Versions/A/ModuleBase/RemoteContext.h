/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/Versions/A/ModuleBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LARemoteContextOwnership.h>

@protocol LARemoteContextOwnership;
@class NSString, NSUUID;

@interface RemoteContext : NSObject <LARemoteContextOwnership> {

	NSString* _description;
	NSUUID* _uuid;
	id<LARemoteContextOwnership> _ownership;
	unsigned long long _acmExternalizedFormHash;
	RemoteContext* _originalOwnership;

}

@property (nonatomic,readonly) NSUUID * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) id<LARemoteContextOwnership> ownership;                //@synthesize ownership=_ownership - In the implementation block
@property (assign,nonatomic) unsigned long long acmExternalizedFormHash;              //@synthesize acmExternalizedFormHash=_acmExternalizedFormHash - In the implementation block
@property (nonatomic,readonly) RemoteContext * originalOwnership;                     //@synthesize originalOwnership=_originalOwnership - In the implementation block
-(RemoteContext *)originalOwnership;
-(id)initWithOwnership:(id)arg1 uuid:(id)arg2 description:(id)arg3 originalOwnership:(id)arg4 ;
-(unsigned long long)acmExternalizedFormHash;
-(void)setAcmExternalizedFormHash:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(NSUUID *)uuid;
-(id<LARemoteContextOwnership>)ownership;
@end
